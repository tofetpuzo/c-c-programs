#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// return a copy of the argument string with all non-alphabetic
// characters removed

string remove_punct(const string &s) {
  string retval{""};
  copy_if(s.begin(), s.end(), back_inserter(retval),
          [](char c) { return isalpha(c); });

  transform(begin(retval), end(retval), begin(retval),
            [](char c) { return tolower(c); });

  return retval;
}

int main() {
  string s{""};
  cout << "Please enter your palindrome: ";
  getline(cin, s);

  // input string with punctuation and spaces removed
  string pal{remove_punct(s)};

  //   call mismatch to compare the string to its reverse
  // use a reverse iterator for the second sequence

  auto p = mismatch(cbegin(pal), cend(pal), crbegin(pal));

  //   the return value from mismatch() is a pair of iterators
  // These  point to the first mismatched elements in the two sequences
  // If the first iterator is equal to the end of the sequence, then

  //   the sequence is a palindrome
  if (p.first == cend(pal) && p.second == crend(pal)) {
    cout << "\"" << s << "\" is a palindrome\n";
  } else {
    cout << "\"" << s << "\" is not a palindrome\n";

    //   print the mismatched characters
    string outstr;
    copy(cbegin(pal), p.second.base(), back_inserter(outstr));
    cout << "'" << *(p.first) << "'"
         << " and "
         << "'" << *(p.second) << "'"
         << " do not match\n";
    cout << "at \"" << outstr << "\"\n";
  }
}
