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
  // using transform to transform a vector of ints to a vector of doubles
  vector<int> vec{3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  cout << "vec: ";
  print(vec);

  vector<int> vec2;

  transform(begin(vec), end(vec), back_inserter(vec2),
            [](int i) { return 2 * i; });

  cout << "vec2: ";
  print(vec2);
}