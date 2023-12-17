#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vec(vector<int> &items) {
  for (auto i : items)
    cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> items{1, 122, 23, 44, 15, 6, 37, 18, 29};

  cout << "original vector: ";
  print_vec(items);

  // sort the vector
  sort(begin(items), end(items));

  //   check if the vector is sorted

  cout << "is the vector sorted? " << boolalpha
       << is_sorted(begin(items), end(items)) << endl;

  cout << "sorted vector: ";
  print_vec(items);

  // sort the vector in descending order
  sort(begin(items), end(items), greater<int>());

  cout << "sorted vector in descending order: ";
  print_vec(items);

  // sort the vector in descending order
  sort(begin(items), end(items), [](int a, int b) { return a > b; });

  cout << "sorted vector in descending order: ";
  print_vec(items);

  //   check if the vector is sorted

  cout << "is the vector sorted? " << boolalpha
       << is_sorted(begin(items), end(items)) << endl;
}