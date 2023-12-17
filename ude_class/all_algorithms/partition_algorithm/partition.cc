// using the partition algorithm

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

  cout << "original vector: ";

  for (auto i : vec)
    cout << i << " ";
  cout << endl;

  //   //   sort the vector so that duplicate elements are adjacent
  //   sort(begin(vec), end(vec));

  //   cout << "sorted vector: ";

  //   for (auto i : vec)
  //     cout << i << " ";
  //   cout << endl;

  //   partition the vector so that the odd elements are before the even
  //   elements
  //   auto it = partition(begin(vec), end(vec), [](int i) { return i % 2 == 1;
  //   });

  //   cout << "vector after calling partition: ";

  //   for (auto i : vec)
  //     cout << i << " ";
  //   cout << endl;

  //   partition the vector so that the even elements are before the odd
  //   elements
  auto it2 =
      stable_partition(begin(vec), end(vec), [](int i) { return i % 2 == 1; });

  cout << "vector after calling stable partition again: ";

  for (auto i : vec)
    cout << i << " ";
  cout << endl;
}