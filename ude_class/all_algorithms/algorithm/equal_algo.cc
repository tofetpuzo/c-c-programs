#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool equal_string(const string &lhs, const string &rhs) {
  return equal(cbegin(lhs), cend(lhs), cbegin(rhs), cend(rhs),
               [](char lc, char rc) { return toupper(lc) == toupper(rc); });
}

void test(const string &word1, const string &word2) {
  cout << word1 << " and " << word2 << " are "
       << (equal_string(word1, word2) ? "equal" : "not equal") << '\n';
}

int main() {
  test("Hello", "hello");
  test("Hello", "world");
  test("Hello", "Hello");
  test("lambda", "LAMBDA");
  int x{5};
  int y = 1;
  auto res = [y = y + 1](int x) {
    cout << "y = " << y << endl;
    return x + y;
  };

  cout << res(5) << endl;
}