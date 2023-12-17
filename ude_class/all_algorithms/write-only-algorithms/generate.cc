// funtor class for generating random numbers

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class square {
private:
  int count{0};

public:
  //   int operator()(int x) { return x * x; }
  int operator()() {
    ++count;
    return count * count;
  }
};

int main() {
  vector<int> vec{3, 1, 4, 1, 5, 9, 2, 6, 3};
  vector<int> vec2;

  //  generate square of each element in vec
  //   transform(vec.begin(), vec.end(), vec.begin(), square());

  //   generate(vec2.begin(), vec2.end(), square());

  //   using generate_n to generate 10 random numbers
  //

  //   generate_n(back_insert_iterator<vector<int>>(vec2), 10, square());
  generate_n(back_inserter(vec2), 10, square());

  // generate(vec2.begin(), vec2.end(), []() { return rand() % 100; });

  for (auto i : vec2)
    cout << i << ", ";
  cout << endl;

  return 0;
}