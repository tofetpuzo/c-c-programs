// TODO: using the seach() algorithm to find a subsequence of elements

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1{"The cat in the hat"};
  cout << "string to search is: " << str1 << endl;

  string str2{"hat"};
  cout << "string to search for is: " << str2 << endl;

  // find the first occurrence of "cat" or "dog"
  auto itr = search(cbegin(str1), cend(str1), cbegin(str2), cend(str2));

  if (itr != cend(str1)) {
    cout << "Found " << str2 << " at index: " << distance(cbegin(str1), itr)
         << endl;
  } else {
    cout << "No match found" << endl;
  }
}
