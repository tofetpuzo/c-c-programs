#include <iostream>
#include <string>

using namespace std;
using namespace std::string_literals;

class String {
  string s;

public:
  // Default constructor
  String() : String{""} {}
  // constructors
  String(const string &s) : s{s} {}

  // copy constructor
  String(const String &arg) : s{arg.s} {}

  //   assignment operator
  String &operator=(const String &arg) {
    s = arg.s;
    return *this;
  }
  void print() { cout << s << endl; }
};

int main() {
  String s1{"Hello"};
  String bang{s1};

  String bang2 = s1;
  s1.print();
  bang.print();
  bang2.print();
}
