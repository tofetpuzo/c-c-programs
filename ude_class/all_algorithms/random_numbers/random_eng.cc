#include <iostream>
#include <random>

using namespace std;

int main() {
  default_random_engine
      generator; // create engine object - generates sequence of random numbers
  cout << "Five random numbers:" << endl;
  for (int i = 0; i < 5; ++i) {
    cout << generator() << ","
         << endl; // call the functor to get the next value in the sequence
  }
  cout << endl;
}