// using unique and erase to remove duplicates

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

  sort(begin(vec), end(vec));

  cout << "after sorting: ";

  for (auto i : vec)
    cout << i << " ";
  cout << endl;

  //    before calling unique, the vector has 10 elements
  cout << "before calling unique, the vector has " << vec.size() << " elements"
       << endl;

  //   auto defunct = unique(begin(vec), end(vec));
  auto defunct =
      unique(begin(vec), end(vec), [](int i, int j) { return j == i + 1; });

  cout << "after calling unique: ";

  for (auto i : vec)
    cout << i << " ";
  cout << endl;

  //    after calling unique, the vector has 5 elements
  cout << "after calling unique, the vector has " << vec.size() << " elements"
       << endl;
  vec.erase(defunct, end(vec));

  cout << "after calling erase: ";

  //   auto defunct2 = unique(begin(vec), end(vec));

  //   vec.erase(defunct2, end(vec));

  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}