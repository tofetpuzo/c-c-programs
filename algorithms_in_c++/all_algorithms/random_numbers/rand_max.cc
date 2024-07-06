#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));
  // print out a pseudo-random floating-point number
  cout << "floating number: " << 1.0 * rand() / RAND_MAX << endl;
  // std::srand(static_cast<unsigned int>(std::time(nullptr)));
  // print out ten pseudo-random integer number

  cout << "integer numbers: " << RAND_MAX << endl;
  for (int i = 0; i < 10; ++i) {
    cout << ((99.0 * rand()) / RAND_MAX + 1) << endl;
  }

  //   // Seed the random number generator with the current time
  //   std::srand(static_cast<unsigned int>(std::time(nullptr)));

  //   for (int i = 0; i < 10; ++i) {
  //     // Generate a random number between 3 and (3 + 99)
  //     std::cout << (99 * std::rand() / RAND_MAX + 3) << std::endl;
  //   }

  //   return 0;
}