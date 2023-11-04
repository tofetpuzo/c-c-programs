#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// using a lambda expression to compare int

int main() {
  vector<int> vec{10, 2, 21, 3, 14, 27};

  auto result =
      find_if(vec.cbegin(), vec.cend(), [](int i) { return (i % 2 == 1); });

  if (result != vec.end())
    cout << "The first odd value is " << *result << endl;
  else
    cout << "No odd values found" << endl;
  return 0;
}