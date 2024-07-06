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

  cout << "before calling remove, the vector has " << vec.size() << " elements"
       << endl;

  auto defunct = remove(begin(vec), end(vec), 12);

  cout << "Before calling erase the vector has " << vec.size() << " elements"
       << endl;

  vec.erase(defunct, end(vec));

  cout << "after calling remove, the vector has " << vec.size() << " elements"
       << endl;

  cout << "result of removal: ";

  for (auto i : vec)
    cout << i << " ";

  cout << endl;
}