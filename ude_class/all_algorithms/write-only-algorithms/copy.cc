// TODO: USING COPY ALGORITHM

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  vector<int> vec2(5);

  //  copy algorithm
  copy(begin(vec), end(vec), begin(vec2));

  //   using the back_inserter algorithm
  vector<int> vec3;
  copy(begin(vec), end(vec), back_inserter(vec3));

  for (auto i : vec2)
    cout << i << ",";
  cout << endl;

  //  copy_n algorithm
  copy_n(begin(vec), 3, begin(vec2));

  return 0;
}