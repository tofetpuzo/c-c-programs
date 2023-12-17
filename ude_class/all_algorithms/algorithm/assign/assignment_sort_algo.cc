// Write a function that takes a vector of int as argument and uses a range-for
// loop to print out the elements of the vector.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<int> &vec) {
  for (auto &i : vec) {
    cout << i << ", ";
  }
  cout << endl;
}

int main() {
  vector<int> vec{1, 2, 4, 12, 15, 6, 17, 8, 19};

  //   sort descending
  sort(vec.begin(), vec.end(), [](int i, int j) { return i > j; });
  print_vector(vec);
}