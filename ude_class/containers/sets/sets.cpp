#include <iostream>
#include <set>

using namespace std;

void printSet(const set<int> &s) {
  cout << "Set contains: ";
  for (auto it : s) {
    cout << it << ",";
  }
  cout << endl << endl;
}

int main() {
  set<int> s;
  s.insert(3);
  s.insert(6);
  s.insert(7);
  s.insert(8);
  s.insert(9);
  s.insert(10);
  printSet(s);

  auto ret = s.insert(3);
  if (ret.second) {
    cout << "added element" << endl;
  } else {
    cout << "In set already" << endl;
  }

  cout << "calling find((7))" << endl;
  auto it = s.find(7);
  if (it != s.end()) {
    cout << "The set has an element with key " << *it << endl;
  } else {
    cout << "Not found" << endl;
  }

  cout << "\n Calling count(7)" << endl;
  auto count = s.count(7);
  if (count > 0) {
    cout << "The set has an element with key 7" << endl;
  } else {
    cout << "Not found" << endl;
  }

  printSet(s);

  cout << "Removing Element with key 3" << endl;

  s.erase(3);
  printSet(s);

  return 0;
}