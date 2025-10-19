#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

class Test {
public:
  int i{42};
  string str{"Hello"};

  void print(ostream &os) const {
    os << "i = " << i << ", str = " << str << endl;
  }
};

std::ostream &operator<<(std::ostream &os, const Test &test) {
  test.print(os);
  return os;
}

int main() {
  Test t1{1, "one"};
  Test t2{2, "two"};
  Test t3{3, "three"};
  Test test;

  vector<Test> vec{t1, t2, t3};

  for (auto &v : vec) {
    cout << v << endl;
  }

  ofstream out("test.txt");

  if (!out.is_open()) {
    cout << "Cannot open file" << endl;
    return -1;
  }
  out << test << endl;
  out.close();
}