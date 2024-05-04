#include <iostream>
#include <vector>

using namespace std;

int main() {
  try {
    // throw 20;
    // throw "An exception occurred!";

    vector<int> v;
    cout << v.at(20) << endl;
  } catch (...) {
    cout << "Exception occurred!" << endl;
  }
  return 0;
}