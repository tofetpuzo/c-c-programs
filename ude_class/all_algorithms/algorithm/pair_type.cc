#include <iostream>
#include <string>

using namespace std;

int main() {
  //   auto wordpair{make_pair("Hello"s, "World"s)};
  //   pair<string, string> wordpair{"Hello"s, "World"s};

  pair wordpair{"Hello"s, "World"s};
  cout << "first element of pair is \"" << wordpair.first << "\"\n";
  cout << "second element of pair is \"" << wordpair.second << "\"\n";
  cout << "pair has " << wordpair.first.size() << " characters\n";
  cout << "pair has " << wordpair.second.size() << " characters\n";
  cout << "pair has " << wordpair.first.size() + wordpair.second.size()
       << " characters\n";
}