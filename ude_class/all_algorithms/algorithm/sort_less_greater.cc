#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vec{"Hello", "World", "Bond", "007", "James Ibori"};

  cout << "The vector contains before sort: ";

  for (auto i : vec)
    cout << i << ", ";
  cout << endl;

  //   sort(begin(vec), end(vec), less());
  sort(begin(vec), end(vec), greater());
  for (auto i : vec)
    cout << i << ", ";
  cout << endl;
}

// Compare this snippet from ude_class/algorithm/lambda_algo.cc:

// std::plus<int> add;
// std::minus<int> subtract;
// std::multiplies<int> multiply;
// std::divides<int> divide;
// std::modulus<int> modulus;
// std::negate<int> negate;

// relationship operators

// std::equal_to<int> equal;
// std::not_equal_to<int> not_equal;
// std::greater<int> greater;
// std::less<int> less;
// std::greater_equal<int> greater_equal;
// std::less_equal<int> less_equal;

// logical operators

// std::logical_and<int> logical_and;
// std::logical_or<int> logical_or;
// std::logical_not<int> logical_not;

// bitwise operators

// std::bit_and<int> bit_and;
// std::bit_or<int> bit_or;
// std::bit_xor<int> bit_xor;
// std::bit_not<int> bit_not;
