#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}

// merge two sorted vectors

int main() {
  vector<int> vec{45, 22, 32, 1, 4, 51};
  sort(begin(vec), end(vec));
  cout << "vec: ";
  print(vec);

  vector<int> vec2{6, 73, 1, 18, 9, 100};
  sort(begin(vec2), end(vec2));
  cout << "vec2: ";
  print(vec2);

  vector<int> vec3;

  merge(begin(vec), end(vec), begin(vec2), end(vec2), back_inserter(vec3));

  cout << "vec3: ";
  print(vec3);
}