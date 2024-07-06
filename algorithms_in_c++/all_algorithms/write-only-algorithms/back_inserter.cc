// TODO: back_inserter  algorithm

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;
  //  back_inserter is a write-only algorithm
  auto begin_rest = fill_n(back_inserter(vec), 5, 42);
}