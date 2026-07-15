

#include <iostream>
#include <thread>
#include <chrono>

void take_out_trash() {
    std::cout << "Starting to take out trash..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Finished taking out trash!" << std::endl;
}

void wash_dishes() {
    std::cout << "Starting to wash dishes..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Finished washing dishes!" << std::endl;
}

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    // 1. Create and spawn the threads
    std::thread thread1(take_out_trash);
    std::thread thread2(wash_dishes);

    // 2. Wait for both threads to finish before moving on
    thread1.join();
    thread2.join();

    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << "Total time taken: " << elapsed.count() << " seconds" << std::endl;
    // Output will be ~3.00 seconds!
    return 0;
}

