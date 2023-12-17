// TODO: Binary search algorithm is used to search for a specific element in a

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print_vec(vector<int> &vec) {
  for (auto &i : vec) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> vec = {3, 4, 1, 5, 9, 2, 6, 3};

  // sort the vector
  sort(vec.begin(), vec.end());
  cout << "vec: ";
  print_vec(vec);

  // binary search
  auto it = lower_bound(vec.begin(), vec.end(), 9);
  cout << "lower bound of 9: " << *it << endl;

  it = upper_bound(vec.begin(), vec.end(), 9);
  cout << "upper bound of 9: " << *it << endl;

  // equal_range returns a pair of iterators
  auto pair = equal_range(cbegin(vec), cend(vec), 9);
  cout << "equal range of 9: " << *pair.first << " " << *pair.second << endl;

  // binary search
  if (binary_search(cbegin(vec), cend(vec), 9)) {
    cout << "9 is in the vector" << endl;
  } else {
    cout << "9 is not in the vector" << endl;
  }

  return 0;
}
