#include <iostream>
#include <set>

using namespace std;

int main() {
  multiset<int> mset;
  mset.insert(10);
  mset.insert(20);
  mset.insert(30);
  mset.insert(20);
  mset.insert(10);
  mset.insert(10);

  for (auto i : mset) {
    cout << i << " ";
  }
}