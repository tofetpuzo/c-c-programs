#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// using the permutation algorithm

int main() {
  string str{"abc"};

  cout << "original string: " << str << endl;

  do {
    cout << str << endl;
  } while (next_permutation(begin(str), end(str)));
}