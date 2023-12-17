#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ge_5 {
  // overload the () operator
  // takes an std::string, return true if more than 5
public:
  bool operator()(const string &s) { return s.size() >= 5; }
};

class less_5 { // overload the () operator}
private:
  const int no;

public:
  less_5(int n) : no(n) {}
  bool operator()(const string &s) { return s.size() < no; }
};
int main() {
  // manually create a vector of strings
  vector<string> names{"Lia", "Nanethian", "Bolaji", "Bodunrin", "Mummy"};
  ge_5 long_enough; // create a functor object
  less_5 short_enough(5);

  //   find the first string with more than 5 characters
  auto it = find_if(names.cbegin(), names.cend(), long_enough);
  if (it != names.cend())
    cout << "Found a name longer than 5 characters: " << *it << endl;

  //   find characters less than 5
  auto nos = find_if_not(names.cbegin(), names.cend(), long_enough);
  if (nos != names.end())
    cout << "Found a name less than 5 characters: " << *nos << endl;

  return 0;
}