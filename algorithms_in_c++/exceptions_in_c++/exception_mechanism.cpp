#include <iostream>
#include <vector>

using namespace std;

void func(const vector<int> &v) {
  try {
    cout << v.at(20) << endl;
  } catch (const std::out_of_range &e) {
    cout << "Abandoning operation due to exception\n";
    cout << "Exception caught: " << e.what() << endl;
    // throw;
    throw std::exception(e);
    // std::cerr << e.what() << '\n';
  }
}

int main() {
  vector<int> v;
  try {
    func(v);
  } catch (const std::exception &e) {
    cout << "Call to func failed\n";
    cout << "Exception caught: " << e.what() << endl;
  }
  return 0;
}