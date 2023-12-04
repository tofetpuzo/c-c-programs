// TOD0: write an accumulate function

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 3};
  int sum2 = accumulate(vec.begin(), vec.end(), 0);
  cout << "sum: " << sum2 << endl;

  // accumulate with lambda
  int sumsss =
      accumulate(vec.begin(), vec.end(), 0, [](int x, int y) { return x + y; });
  cout << "sum: " << sumsss << endl;

  // accumulate with lambda
  int sumss = accumulate(vec.begin(), vec.end(), 0,
                         [](int x, int y) { return x + 2 * y; });
  cout << "sum: " << sumss << endl;

  // accumulate with lambda
  int sum1 =
      accumulate(vec.begin(), vec.end(), 1, [](int x, int y) { return x * y; });
  cout << "sum: " << sum1 << endl;

  //  returns the sum of the odd numbers in the vector
  auto sums = accumulate(vec.begin(), vec.end(), 0,
                         [](int sum, int n) { return n % 2 ? sum + n : sum; });

  cout << "sum of odd numbers: " << sums << endl;

  return 0;
}
