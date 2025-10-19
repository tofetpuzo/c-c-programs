#include <iostream>
#include <string>

using namespace std;

class Test {
  int i{3};
  string s{"Hello"s};

public:
  friend void print(const Test &);
  friend class
};

void print(const Test &test) {
  cout << "i = " << test.i << ", s = " << test.s << endl;
};

int main() {
  Test test;
  print(test);
}