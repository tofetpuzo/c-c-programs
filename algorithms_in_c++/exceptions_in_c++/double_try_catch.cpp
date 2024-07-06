#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
  try {
    try {
      /* code */
      cout << vec.at(2) << endl;
    } catch (const std::bad_alloc &e) {
      cout << "bad_alloc caught" << endl;
      std::cerr << e.what() << '\n';
    }
  } catch (const std::exception &e) {
    cout << "exception caught" << endl;
    cout << "exception: " << e.what() << '\n';
  }
}