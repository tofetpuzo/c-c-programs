#include <iostream>

using namespace std;

int global{99};

int main() {
  static int static_local{101};
  const int one{1};
  //   const int &const_local{one};

  []() {
    cout << "global: " << global << endl;
    cout << "static_local: " << static_local << endl;
    //  cout << "const_local: " << const_local << endl;

    // cout << "one: " << one << endl;
  };

  return 0;
}