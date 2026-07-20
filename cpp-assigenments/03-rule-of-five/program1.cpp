#include <iostream>
#include <algorithm> // For std::copy
#include <utility>   // For std::move

class DataBuffer {
private:
    int* data;
    size_t size;

public:
    // --- 0. Normal Constructor ---
    DataBuffer(size_t bufferSize) : size(bufferSize) {
        data = new int[size];
        std::cout << "[Constructor] Allocated buffer of size " << size << "\n";
    }

    // --- 1. Destructor ---
    ~DataBuffer() {
        if (data != nullptr) {
            std::cout << "[Destructor] Freeing buffer of size " << size << "\n";
            delete[] data;
        } else {
            std::cout << "[Destructor] Destroying an empty/moved object\n";
        }
    }

    // --- 2. Copy Constructor ---
    DataBuffer(const DataBuffer& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data); 
        std::cout << "[Copy Constructor] Deep copied buffer of size " << size << "\n";
    }

    // --- 3. Copy Assignment Operator ---
    DataBuffer& operator=(const DataBuffer& other) {
        std::cout << "[Copy Assignment] Deep copying buffer of size " << other.size << "\n";
        if (this == &other) { return *this; } 

        delete[] data; 

        size = other.size;
        data = new int[size];
        std::copy(other.data, other.data + size, data);

        return *this;
    }

    // --- 4. Move Constructor ---
    DataBuffer(DataBuffer&& other) noexcept : size(other.size), data(other.data) {
        std::cout << "[Move Constructor] Stole buffer of size " << size << "\n";
        other.size = 0;
        other.data = nullptr; 
    }

    // --- 5. Move Assignment Operator ---
    DataBuffer& operator=(DataBuffer&& other) noexcept {
        std::cout << "[Move Assignment] Stole buffer of size " << other.size << "\n";
        if (this == &other) { return *this; } 

        delete[] data; 

        size = other.size;
        data = other.data; 

        other.size = 0;
        other.data = nullptr;

        return *this;
    }
};

int main() {
    std::cout << "--- STARTING PROGRAM ---\n\n";

    std::cout << "1. Creating object 'a':\n";
    DataBuffer a(10); // Calls Normal Constructor

    std::cout << "\n2. Creating object 'b' as a copy of 'a':\n";
    DataBuffer b = a; // Calls Copy Constructor

    std::cout << "\n3. Creating object 'c' and assigning 'a' to it:\n";
    DataBuffer c(5);  // Calls Normal Constructor
    c = a;            // Calls Copy Assignment Operator

    std::cout << "\n4. Creating object 'd' by moving 'a':\n";
    DataBuffer d = std::move(a); // Calls Move Constructor
    // Note: 'a' is now empty (nullptr)

    std::cout << "\n5. Moving 'b' into already existing 'c':\n";
    c = std::move(b); // Calls Move Assignment Operator
    // Note: 'b' is now empty (nullptr)

    std::cout << "\n--- ENDING PROGRAM (Watch the destructors!) ---\n";
    
    // When main finishes, the compiler will automatically destroy d, c, b, and a.
    // Watch how 'a' and 'b' safely delete without crashing!
    return 0;
}

