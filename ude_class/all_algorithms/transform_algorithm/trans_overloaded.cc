// using transform to add two vectors

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
  vector<int> vec{3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  cout << "vec: ";
  print(vec);

  vector<int> vec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "vec2: ";
  print(vec2);

  vector<int> vec3;

  transform(begin(vec), end(vec), begin(vec2), back_inserter(vec3),
            [](int i, int j) { return i + j; });

  cout << "vec3: ";
  print(vec3);
}