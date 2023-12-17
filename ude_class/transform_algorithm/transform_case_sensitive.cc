#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool equal_strings(const string &lhs, const string &rhs) {
  string lhs_copy{lhs};
  string rhs_copy{rhs};

  //   convert to upper case
  transform(begin(lhs_copy), end(lhs_copy), begin(lhs_copy), ::toupper);
  transform(begin(rhs_copy), end(rhs_copy), begin(rhs_copy), ::toupper);

  return lhs_copy == rhs_copy;
}

void test(const string &str1, const string &str2) {
  cout << str1 << " and " << str2 << " are "
       << (equal_strings(str1, str2) ? "equal" : "not equal") << endl;
}

int main() {
  test("lambda", "Lambda");
  test("lambda", "lambada");
}
