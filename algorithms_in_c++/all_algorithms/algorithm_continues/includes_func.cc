// TODO: using include algorithm to check if a container contains a specific
// element

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  //   string str{"Hello World"};
  string str{"Hello includes all"};
  string vowels{"aeiou"};

  //  sort both the strings
  sort(str.begin(), str.end());
  sort(begin(vowels), end(vowels));

  cout << "string to search: " << str << endl;
  cout << "vowels: " << vowels << endl;

  if (includes(cbegin(str), cend(str), cbegin(vowels), cend(vowels))) {
    cout << "string includes all the vowels" << endl;
  } else {
    cout << "string does not contain all the vowels" << endl;
  }

  return 0;
}