#include <chrono>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>

volatile int sink;

void do_some_work(std::size_t size) {
  std::vector<int> v(size, 42);
  sink =
      std::accumulate(v.begin(), v.end(), 0); // make sure it is a side effect
}

int main() {
  std::cout << std::fixed << std::setprecision(9) << std::left;
  for (auto size{1ull}; size < 10'00'00'00'00ull; size *= 100) {
    const auto start = std::chrono::high_resolution_clock::now();
    do_some_work(size);
    const auto end = std::chrono::high_resolution_clock::now();

    const std::chrono::duration<double> diff = end - start;

    std::cout << "Time to fill and iterate a vector of " << std::setw(9) << size
              << " ints : " << diff << '\n';
  }
}