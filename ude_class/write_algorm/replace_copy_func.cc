// TODO: uisng the replace_copy() function to replace the elements in a sequence

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // replace all occurrences of a number in a vector

  vector<int> vec{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  vector<int> vec3;
  replace_copy(begin(vec), end(vec), back_inserter(vec3), 1, 100);

  //   print the vector
  for (auto i : vec3)
    cout << i << " ";
  cout << endl;

  //   replace_if
  vector<int> vec2{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  replace_copy_if(
      begin(vec2), end(vec2), back_inserter(vec2),
      [](int i) { return i % 2 == 0; }, 100);

  //   print the vector
  for (auto i : vec2)
    cout << i << " ";

  return 0;
}