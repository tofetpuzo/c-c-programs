#include <iostream>
#include <sstream>
#include <string>

using namespace std;

template <typename T> string debug_rep(const T &t) {
  ostringstream ret;
  ret << t;
  return ret.str();
}

int main() {
  string data{"It is time to say "};
  string pi{debug_rep(3.1415926)};
  data += pi;
  cout << data << endl;
}