// using the nth_element algorithm

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vec(vector<int> vec) {
  for (auto i : vec) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> vec{1, 4, 5, 2, 6, 17, 9, 3};
  vector<int> vec2{vec};
  sort(begin(vec2), end(vec2));

  cout << "vec: ";
  print_vec(vec);

  cout << "vec if sorted: ";
  print_vec(vec2);

  cout << endl << "calling the nth element algorithm" << endl;

  auto mid = begin(vec) + 4;
  nth_element(begin(vec), mid, end(vec));

  cout << "the mid element is  " << *mid << endl;

  cout << "vec after nth element: ";
  print_vec(vec);
}