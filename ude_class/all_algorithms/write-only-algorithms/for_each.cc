// TODO: for each using lambda as the third argument

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string str{"this is a test"};
  cout << "with for each: ";

  for_each(str.begin(), str.end(), [](const char c) { cout << c << ", "; });
  cout << endl;
  //   using reference with lambda

  for_each(str.begin(), str.end(), [](char &c) { c = toupper(c); });

  cout << "after for each: " << str << endl;

  return 0;
}