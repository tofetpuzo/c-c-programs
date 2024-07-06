#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> vec;

  //   cout << vec[2] << endl;
  try {
    /* code */
    cout << vec.at(2) << endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
}