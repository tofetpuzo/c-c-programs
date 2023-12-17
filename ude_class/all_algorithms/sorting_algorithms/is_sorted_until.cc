// using is_sorted_until algorithm

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
  vector<int> items{1, 23, 35, 44, 53, 15, 6, 37, 18, 29};
  cout << "original vector: ";
  print_vec(items);

  auto el = is_sorted_until(cbegin(items), cend(items));

  if (el != cend(items)) {
    cout << "the vector is sorted until: " << *el << endl;
    cout << "the index of the element is: " << distance(cbegin(items), el)
         << endl;
  } else
    cout << "the vector is sorted" << endl;
}
