#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono;

long long fibonacci(int n) {
    return (n < 2) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // auto start = steady_clock::now();
    // long long n = fibonacci(40);

    // std::cout << "Fibonacci number is " << n << std::endl;

    // auto finish = steady_clock::now();
    // auto elapsed = duration_cast<milliseconds>(finish - start).count();

    // std::cout << "Elapsed time: " << elapsed << " milliseconds" << std::endl;

    std::cout << "Waiter!" << std::endl;
    std::this_thread::sleep_for(2s);
    std::cout << "You called sir!" << std::endl;

    return 0;
}