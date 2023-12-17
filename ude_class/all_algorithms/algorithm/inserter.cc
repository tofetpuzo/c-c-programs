#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{10, 2, 21, 3, 14, 27};
  cout << "Vector has: ";

  for (auto i : vec)
    cout << i << ", ";
  cout << endl;

  //   insert data
  auto el2 = next(begin(vec));

  cout << "Inserting 67 before the second element\n";

  auto it = inserter(vec, el2);

  *it = 67;

  cout << "Vector has: ";
  for (auto i : vec)
    cout << i << ", ";

  cout << endl;

  //  status at position el
  cout << *el2 << endl;
}