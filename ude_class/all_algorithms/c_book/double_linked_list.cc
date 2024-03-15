#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> l{1, 2, 3, 4, 5};
  cout << "Initial element in list" << endl;

  for (auto i : l) {
    cout << i << " ";
  }
  cout << endl;

  auto last = end(l);

  advance(last, -1);
  cout << "Last element in list: " << *last << endl;
  auto two = l.insert(last, 7);

  cout << "Elements in list after inserting 2" << endl;

  for (auto i : l) {
    cout << i << " ";
  }
  cout << endl;

  //   l.erase(two);
  l.erase(two);
  cout << "Elements in list after erasing 2" << endl;

  for (auto i : l) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}