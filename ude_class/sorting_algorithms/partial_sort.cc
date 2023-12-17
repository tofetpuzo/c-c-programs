// using the partial sort algorithm

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string keys{"qwertyuiopasdfghjklzxcvbnm"};
  string v2(5, ' ');

  cout << "original string: " << keys << endl;

  auto it = begin(keys);
  partial_sort(it, it + 5, end(keys));

  cout << "first 5 characters: " << keys.substr(0, 5) << endl;
  cout << "Full keys strings: " << keys << endl;

  advance(it, 5);
  partial_sort(it, it + 5, end(keys));
  cout << "first 5 characters: " << keys << endl;

  cout << "Full keys strings: " << keys << endl;

  // partial_sort_copy algorithm

  partial_sort_copy(cbegin(keys), cend(keys), begin(v2), end(v2));
  cout << "v2: ";
  for (auto i : v2) {
    cout << i << " ";
  }
}