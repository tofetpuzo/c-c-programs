#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> vec{45, 22, 32, 1, 4, 51};

  cout << "Initial vector: ";
  print(vec);

  //   use the third element as the pivot
  auto pivot = begin(vec);
  advance(pivot, 2);

  // perform the rotation
  auto res = rotate(begin(vec), pivot, end(vec));

  cout << "Rotated vector: ";
  print(vec);

  cout << "The element at the beginning is: " << *res << endl;

  //   using the rotate_copy algorithm
  vector<int> vec2{45, 22, 32, 1, 4, 51};
  vector<int> vec3(vec2.size());
  auto pivot2 = begin(vec2);
  advance(pivot2, 2);

  auto res2 = rotate_copy(begin(vec2), pivot2, end(vec2), begin(vec3));
  //   auto res2 = rotate_copy(begin(vec2), pivot2, end(vec2),
  //   back_inserter(vec3));

  cout << "vec3: ";
  print(vec3);

  //   res is an iterator to the last element copied into vec3 value is 4
  cout << "The element at the beginning is: " << *(res2 - 1) << endl;
}
