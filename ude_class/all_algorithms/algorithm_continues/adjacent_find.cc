// std::adject_find() looks for two consecutive elements that have the same
// value.

#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1{"Hello World"};
  string vowels{"aeiou"};

  // find the first occurrence of "cat" or "dog"
  //   string::iterator itr =
  //       find_first_of(cbegin(str1), cend(str1), cbegin(vowels),
  //       cend(vowels));

  auto vowel = adjacent_find(cbegin(str1), cend(str1));

  if (vowel != cend(str1)) {
    cout << "First vowel is " << *vowel
         << " at index: " << distance(cbegin(str1), vowel) << endl;
  } else {
    cout << "No match found" << endl;
  }

  return 0;
}