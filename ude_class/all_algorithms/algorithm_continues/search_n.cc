// TODO: using search_n() to find a subsequence of n consecutive elements

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 2, 4, 5, 1, 2, 3, 5, 5};

  // find the first occurrence of 2 consecutive elements that have the same
  // value.
  auto itr = search_n(cbegin(vec), cend(vec), 2, 5);

  if (itr != cend(vec)) {
    cout << "Found two consecutive elements with value: " << *itr
         << " at index: " << distance(cbegin(vec), itr) << endl;
  } else {
    cout << "No match found" << endl;
  }

  return 0;
}