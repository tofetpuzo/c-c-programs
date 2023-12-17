#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 4, 12, 15, 6, 17, 12, 8, 19};

  cout << "original vector: ";

  for (auto i : vec)
    cout << i << " ";
  cout << endl;

  auto defunct =
      remove_if(begin(vec), end(vec), [](int i) { return i % 2 == 0; });

  // destroy the removed elements
  vec.erase(defunct, end(vec));

  cout << "after calling remove, the vector has " << vec.size() << " elements"
       << endl;

  cout << "result of removal: ";
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}