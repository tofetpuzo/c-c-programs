#include <iostream>
#include <vector>

using namespace std;

// functions which throws an unhandled exception
void func(const vector<int> &vec) { cout << vec.at(2) << endl; }

int main() {
  vector<int> vec;

  try {
    func(vec);
  } catch (const std::exception &e) {
    cout << "Caught an exception in main" << endl;
    std::cerr << e.what() << '\n';
  }
}