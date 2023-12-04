// TODO: using the copy_if algorithm

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5};
  vector<int> vec2(5);

  //  copy_if algorithm
  copy_if(begin(vec), end(vec), begin(vec2),
          [](int i) { return i % 2 ? i : 0; });

  for (auto i : vec2)
    cout << i << ",";
  cout << endl;

  return 0;
}