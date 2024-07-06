#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;

  cout << "Vector has " << vec.size() << " elements\n";

  cout << "Calling back_inserter to add elements\n";
  auto it = back_inserter(vec);

  //   assign to this iterator
  cout << "Assigning to insert iterator\n";
  *it = 99;
  *it = 88;

  //   Vector elements are now {99, 88}
  cout << "Vector has " << vec.size() << " elements\n";

  cout << "Calling back_inserter to add elements: ";

  for (auto i : vec)
    cout << i << ", ";
}