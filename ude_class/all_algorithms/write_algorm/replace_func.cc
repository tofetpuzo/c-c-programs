// TOD0: write an algorithm to replace a function in a file

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

  // replace all occurrences of a number in a vector

  vector<int> vec{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

  print(vec);

  replace(begin(vec), end(vec), 1, 100);

  cout << "After replace: " << endl;
  print(vec);

  //   replace_if
  vector<int> vec2{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
  replace_if(
      begin(vec2), end(vec2), [](int i) { return i % 2 == 0; }, 100);

  cout << "After replace_if: " << endl;
  print(vec2);

  //   ifstream in_file{"../replace_func.cc"};
  //   ofstream out_file{"../replace_func_copy.cc"};

  //   if (!in_file || !out_file) {
  //     cerr << "Problem opening files!" << endl;
  //     return 1;
  //   }

  //   //  copy algorithm
  //   copy(istreambuf_iterator<char>(in_file), istreambuf_iterator<char>(),
  //        ostreambuf_iterator<char>(out_file));

  //   return 0;
}