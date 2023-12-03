#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
  string str{"Hello World"};
  cout << "String to search: " << str << endl;

  string vowels{"aeiou"};

  //   auto found = find_if(cbegin(str), cend(str), [vowels](char ch) {
  //     return find(cbegin(vowels), cend(vowels), ch) != cend(vowels);
  //   });

  //   using two cbegin and cend in the same line
  auto vowel =
      find_first_of(cbegin(str), cend(str), cbegin(vowels), cend(vowels));

  if (vowel != cend(str))
    cout << "Found vowel '" << *vowel << "' at index " << vowel - cbegin(str)
         << endl;
  else
    cout << "No vowels found" << endl;

  //   if (found != cend(str))
  //     cout << "Found vowel '" << *found << "' at index " << found -
  //     cbegin(str)
  //          << endl;
  //   else
  //     cout << "No vowels found" << endl;
}