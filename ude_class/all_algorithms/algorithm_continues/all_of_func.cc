// using all of algorithm to check all elements in a container

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

int main(int argc, char *argv[]) {
  vector<int> vec = {3, 5, 7, 9, 11, 13, 15, 17, 19};
  cout << "vec: ";
  print_vec(vec);

  // check if all elements are odd
  auto is_odd = [](int i) { return i % 2; };
  auto is_even = [](int i) { return i % 2 == 0; };

  if (all_of(cbegin(vec), cend(vec), is_odd)) {
    cout << "all elements are odd" << endl;
  }
  if (all_of(cbegin(vec), cend(vec), is_even)) {
    cout << "all elements are even" << endl;
  }
  if (any_of(cbegin(vec), cend(vec), is_even)) {
    cout << "at least one element is even" << endl;
  }
  if (none_of(cbegin(vec), cend(vec), is_even)) {
    cout << "none of the elements are even" << endl;
  }
  if (none_of(cbegin(vec), cend(vec), is_odd)) {
    cout << "none of the elements are odd" << endl;
  }
  return 0;
}