#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class is_shorter {
  // define a predicate function
public:
  bool operator()(const string &s1, const string &s2) {
    return s1.size() < s2.size();
  }
};

int main() {
  vector<string> names{"Linda", "Nanethian", "Bolaji", "Bodunrin", "Mummy"};

  cout << "Vector: ";
  for (auto &name : names) {
    cout << name << ", ";
  }
  cout << endl;

  //   sort alphabetically
  sort(names.begin(), names.end());
  cout << "Sorted alphabetically: ";
  //   vector<string>::iterator it;
  for (auto name : names) {
    cout << name << ", ";
  }
  cout << endl;

  //   sort the vector
  sort(names.begin(), names.end(), is_shorter());

  cout << "Sorted Vector by length: ";
  for (auto &name : names) {
    cout << name << ", ";
  }
  _if()
}