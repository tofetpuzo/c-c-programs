// TODO: using the reduce algorithm to find the sum of all the elements in a

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 3};

  auto sum = reduce(vec.begin(), vec.end(), 0);
  cout << "sum: " << sum << endl;
}