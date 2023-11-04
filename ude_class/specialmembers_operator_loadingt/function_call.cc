#include <chrono>
#include <iostream>
#include <vector>

using namespace std;

class divisible {
private:
  int divisor{1};

public:
  divisible(int d) : divisor(d) {}
  bool operator()(int num) { return num % divisor == 0; }
};

void check(const vector<int> &vec, divisible &div) {
  for (auto &i : vec) {
    if (div(i)) {
      cout << i << " is divisible by 3 \n";
    }
  }
  cout << endl;
}

int main() {
  vector<int> numbers{1, 4, 7, 11, 12, 23, 36};
  cout << "Vector: ";
  for (auto &number : numbers) {
    cout << number << ", ";
  }
  cout << endl;

  //   create a divisible object with member variable divisor = 3
  cout << "finding elements divisible by 3" << endl;

  // pass this as agruments to check function
  divisible div3{3};
  check(numbers, div3);

  auto begin = std::chrono::high_resolution_clock::now();

  cout << begin << endl;
}
