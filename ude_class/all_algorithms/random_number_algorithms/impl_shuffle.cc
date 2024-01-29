#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

using namespace std;

void print(const vector<int> &v) {
  ostream_iterator<int> out_it(cout, ", ");
  copy(v.begin(), v.end(), out_it);
}

int main() {
  vector<int> v{3, 1, 5, 4, 9, 2, 6, 8, 7};
  static mt19937 mt; // static so that different runs are consistent

  cout << "Vector before shuffling\n";
  print(v);

  uniform_int_distribution<int> uid(
      0, v.size() - 1); // we want ints in the range [1, 60]
  for (int i = 0; i < v.size(); ++i) {
    swap(v[i], v[uid(mt)]);
  }
  cout << "\nVector after shuffling\n";
  print(v);
  cout << endl;
}