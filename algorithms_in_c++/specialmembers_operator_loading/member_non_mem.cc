#include <iostream>
#include <string>

using namespace std;

class String {
  string s;

public:
  // Default constructor
  String(const char *str) : s(str) {}
  // constructors
  String(const string &s) : s(s) {}

  // copy constructor
  String(const String &arg) : s{arg.s} {}

  //   friend operator
  friend String operator+(const String &arg1, const String &arg2);

  //   assignment operator
  //   String operator+(const String &arg) { return s + arg.s; }

  void print() { cout << s << endl; }
};

//   assignmet operator with two arguments
String operator+(const String &arg1, const String &arg2) {
  return arg1.s + arg2.s;
}

int main() {
  String s1{"Hello"}, bang{"!"};
  String s2 = s1 + bang;
  s2.print();

  String hi = s1 + " John ";
  cout << "I am James, ";
  hi.print();
}