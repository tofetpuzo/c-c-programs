// TODO: using the fill algorithm to fill a container with a specific value

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<int> vec(10);
  fill(begin(vec), end(vec), 5);

  for (auto &i : vec) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
