#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

  cout << "original vector: ";
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
  //   sort the vector so that duplicate elements are adjacent
  sort(begin(vec), end(vec));

  cout << "sorted vector: ";
  for (auto i : vec)
    cout << i << " ";
  cout << endl;

  vector<int> vec2;
  unique_copy(begin(vec), end(vec), back_inserter(vec2));

  cout << "vector after calling unique_copy: ";
  for (auto i : vec2)
    cout << i << " ";
  cout << endl;
}