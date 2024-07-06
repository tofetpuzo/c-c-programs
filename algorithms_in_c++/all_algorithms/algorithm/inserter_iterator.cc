#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
  cout << "Enter some words: " << endl;

  istream_iterator<string> iis(cin); // Iterator to read strings from cin
  istream_iterator<string> eos;      // Empty iterator

  vector<string> vec; // Vector to hold the strings
  auto it = back_inserter(vec);

  //   copy(iis, eos, back_inserter(vec));
  while ((iis != eos)) { // do we have any input to read?
    it = *iis;
    iis++; // add that input to the vector and move to the next input
  }

  cout << "You entered: " << vec.size() << " words\n";
  for (auto i : vec)
    cout << i << ", ";
  cout << endl;
}