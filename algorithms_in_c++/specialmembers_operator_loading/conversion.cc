#include <iostream>

using namespace std;

class Test {
  int id{3};
  string str;

public:
  Test() = default;
  Test(const Test &other) { cout << "Copy constructor" << endl; }
  explicit operator int() const { return id; }
};

Test func() { return Test(); }
int main() {
  //   Test test;
  //   int t = test + 5;
  cout << "CALLING FUNCTION" << endl;
  Test tes = Function();
  cout << "Returned funcs" << endl;

  cout << static_cast<int>(test) << endl;
  //   cout << test << endl;
  //   cout << t << endl;
};