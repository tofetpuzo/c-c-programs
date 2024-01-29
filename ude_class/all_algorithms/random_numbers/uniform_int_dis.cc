#include <iostream>
#include <random>

using namespace std;

int main() {
  mt19937 mt; // create engine object - generates sequence of random numbers

  uniform_int_distribution<int> idist(1,
                                      60); // we want ints in the range [1, 60]

  cout << "Five random integers between 0 and 10: \n";
  for (int i = 0; i < 5; ++i) {
    cout << idist(mt) << ", "; // call the functor to get the next value
                               // in the sequence
  }
  cout << endl << endl;

  uniform_real_distribution<double> fdist(0, 10); // we want doubles in the
                                                  // range [0, 10]

  cout << "Five random floating point numbers between 0 and 10: \n";
  for (int i = 0; i < 5; ++i) {
    cout << fdist(mt) << ",";
  }
  cout << endl << endl;
}