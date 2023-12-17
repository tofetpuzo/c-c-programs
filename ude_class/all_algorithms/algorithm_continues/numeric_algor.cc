// TODO: numeric algorithm using iota algorithm

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(10);

  iota(begin(vec), end(vec), 1);

  for (auto &i : vec) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
