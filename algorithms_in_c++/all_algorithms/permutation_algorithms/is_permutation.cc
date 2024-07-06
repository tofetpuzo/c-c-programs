// using is_permutation
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_vec(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 81, 9};
  vector<int> vec2{5, 4, 3, 2, 1, 6, 7, 8, 9};

  if (is_permutation(begin(vec1), end(vec1), begin(vec2))) {
    cout << "vec1 and vec2 have the same elements" << endl;
  } else {
    cout << "vec1 and vec2 don't have the same elements" << endl;
  }
}