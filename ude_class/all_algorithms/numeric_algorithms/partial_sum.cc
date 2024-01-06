// using the partial sum

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void print_vector(const vector<int> &vec) {
  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}

int main() {
  vector<int> vec{1, 2, 3, 4, 5};

  cout << "original vector: ";
  print_vector(vec);

  vector<int> vec2;
  partial_sum(cbegin(vec), cend(vec), back_inserter(vec2));

  cout << "vector after calling partial_sum: ";
  print_vector(vec2);

  cout << "using adjacent_difference: ";
  vector<int> vecs{1, 3, 6, 10, 15};
  vector<int> vec3;
  adjacent_difference(cbegin(vecs), cend(vecs), back_inserter(vec3));
  print_vector(vec3);
}