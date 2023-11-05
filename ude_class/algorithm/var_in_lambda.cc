#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> words{"a", "james", "eat", "apple", "banana", "orange"};
  int n{5}, idx{-1}; // add another variable idx for the index of the first
                     // element that satisfies the condition

  auto res = find_if(cbegin(words), cend(words), [n, &idx](const string &s) {
    ++idx;
    return s.size() > n;
  });

  if (res != cend(words)) {
    cout << R"(The first word with more than )" << n << R"( characters is ")";
    cout << *res << R"(")" << endl;
    cout << "The index is at " << idx << endl;
  }
}
