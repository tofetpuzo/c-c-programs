#include <iostream>
#include <random>

int main() {
  // Create a random number generator engine
  std::random_device rd;
  std::mt19937 gen(rd());

  // Define a distribution for the desired range [3, 102]
  std::uniform_real_distribution<double> dis(3.0, 102.0);

  for (int i = 0; i < 10; ++i) {
    // Generate a random number between 3 and 102
    std::cout << dis(gen) << std::endl;
  }

  return 0;
}
