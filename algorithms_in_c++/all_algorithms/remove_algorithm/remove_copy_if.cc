#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 4, 12, 15, 6, 17, 12, 8, 19};

  cout << "original vector: ";
  for (auto i : vec)
    cout << i << " ";

  cout << endl;

  vector<int> vec2;

  remove_copy_if(cbegin(vec), cend(vec), back_inserter(vec2),
                 [](int i) { return i % 2 == 0; });

  cout << "result of removal: ";

  for (auto i : vec2)
    cout << i << " ";
  cout << endl;
}