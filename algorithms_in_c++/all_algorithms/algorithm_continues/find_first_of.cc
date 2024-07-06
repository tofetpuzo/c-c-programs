#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// using first_of to find the first occurrence of a character

int main() {
  string str1{"The cat in the hat"};
  cout << "string to search is: " << str1 << endl;
  string vowels{"aeiou"};

  // find the first occurrence of "cat" or "dog"
  //   string::iterator itr =
  //       find_first_of(cbegin(str1), cend(str1), cbegin(vowels),
  //       cend(vowels));

  auto vowel =
      find_first_of(cbegin(str1), cend(str1), cbegin(vowels), cend(vowels));

  if (vowel != cend(str1)) {
    cout << "First vowel is " << *vowel
         << " at index: " << distance(cbegin(str1), vowel) << endl;
  } else {
    cout << "No match found" << endl;
  }

  auto vowel2 =
      find_first_of(next(vowel), cend(str1), cbegin(vowels), cend(vowels));

  if (vowel2 != cend(str1)) {
    cout << "First vowel is " << *vowel2
         << " at index: " << distance(cbegin(str1), vowel2) << endl;
  } else {
    cout << "No match found" << endl;
  }

  return 0;
}