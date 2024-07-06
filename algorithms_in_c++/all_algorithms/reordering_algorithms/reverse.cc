#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}
// using reverse to reverse a vector

int main() {
  vector<int> vec{45, 22, 32, 1, 4, 51, 6, 73, 1, 18, 9, 100};
  vector<int> vec2;
  cout << "vec: ";
  print(vec);

  copy(begin(vec), end(vec), back_inserter(vec2));

  reverse(begin(vec), end(vec));

  cout << "result of reverse: ";
  print(vec);

  //   using the for loop and swap

  size_t len{vec2.size() - 1};

  for (int i = 0; i < len / 2; ++i) {
    // cout << "swapping " << vec2[i] << " and " << vec2[len - i] << endl;
    swap(vec2[i], vec2[len - i]);
  }
  cout << "result of for loop and swap: ";
  print(vec2);
}