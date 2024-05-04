#include <cmath>
#include <iostream>

using namespace std;

int main() {
  try {
    cout << sqrt(-1) << endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
}