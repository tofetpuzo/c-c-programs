// using the prev_permutation algorithm

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string str{"abc"};

  cout << "The permutations of " << str << "in reverse order are: " << endl;
  sort(begin(str), end(str), [](char c1, char c2) { return c1 > c2; });

  do {
    cout << str << endl;
  } while (prev_permutation(begin(str), end(str)));
}