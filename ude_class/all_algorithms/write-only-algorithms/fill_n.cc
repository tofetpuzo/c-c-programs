// TODO: using fill_n algorithm to fill a container with a specific values

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(5);
  //   vector<int> vec(10);
  //   auto begin_rest = fill_n(begin(vec), 5, 42);
  //   fill(begin_rest, end(vec), 99);

  //   resize vec to 5 elements
  if (vec.size() < 5) {
    vector<int> vec2(5);
    vec2.swap(vec2);
  }
  auto begin_rest = fill_n(begin(vec), 5, 42);
  for (auto i : vec)
    cout << i << ",";

  //  the last element in vec, remove the comma
  cout << endl;

  return 0;
}