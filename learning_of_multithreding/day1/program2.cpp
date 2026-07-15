#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

// Shared resource
int bank_account_balance = 100;

// Mutex to protect the balance
std::mutex balance_mutex;

void deposit_money(int amount) {
    // std::lock_guard automatically locks the mutex upon construction
    // and unlocks it when it goes out of scope at the end of the function.
    std::lock_guard<std::mutex> lock(balance_mutex);
    
    // Crucial section: safe from race conditions
    int new_balance = bank_account_balance + amount;
    bank_account_balance = new_balance; 
}

int main() {
    std::vector<std::thread> threads;

    // Launch 100 threads to each deposit $10 concurrently
    for (int i = 0; i < 100; ++i) {
        threads.push_back(std::thread(deposit_money, 10));
    }

    // Wait for all threads to finish
    for (auto& th : threads) {
        th.join();
    }

    std::cout << "Final Bank Balance: $" << bank_account_balance << std::endl;
    // Output will be exactly $1100. Without the mutex, it would be corrupted!
    return 0;
}
