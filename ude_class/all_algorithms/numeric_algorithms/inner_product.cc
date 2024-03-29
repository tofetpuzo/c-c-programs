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
  vector<int> expected{1, 2, 3, 4, 5};
  vector<int> actual{1, 3, 6, 10, 15};

  cout << "original vector: ";
  print_vector(expected);

  cout << "using the inner product algorithm: ";

  auto result = inner_product(cbegin(expected), cend(expected), cbegin(actual), 0);

  cout << result << endl;

  cout << "using the inner product algorithm with a lambda: ";

  auto result2 = inner_product(
      cbegin(expected), cend(expected), cbegin(actual), 0,
      [](const auto &lhs, const auto &rhs) { return lhs + rhs; },
      [](const auto &lhs, const auto &rhs) { return lhs * rhs; });

  cout << result2 << endl;

  //   using transform and accumulate algorithms
  vector<int> vec3;

  transform(cbegin(expected), cend(expected), cbegin(actual), back_inserter(vec3),
            multiplies<int>());

  cout << "using transform and accumulate algorithms with a lambda: ";

  auto result4 = accumulate(cbegin(vec3), cend(vec3), 0);

  cout << result4 << endl;
}
