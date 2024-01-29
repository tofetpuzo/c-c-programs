#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main() {
  vector<int> v{3, 1, 5, 4, 9, 2, 6, 8, 7};
  static mt19937 mt; // static so that different runs are consistent

  cout << "Vector before shuffling\n";
  for (auto i : v) {
    cout << i << " ,";
  }
  shuffle(begin(v), end(v), mt);

  cout << "\nVector after shuffling\n";
  for (auto i : v) {
    cout << i << " ,";
  }
  cout << endl;
}