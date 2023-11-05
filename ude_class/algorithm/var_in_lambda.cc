#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

auto greeter(const string &saturation) {
  return [saturation](const string &name) { return saturation + ", "s + name; };
}

int main() {
  vector<string> words{"a", "james", "eat", "apple", "banana", "orange"};
  int n{5}, idx{-1}; // add another variable idx for the index of the first
                     // element that satisfies the condition
                     //   int max{5};

  //   auto is_longer_than = [max](const string &s) { return s.size() > max; };

  //   auto res = find_if(cbegin(words), cend(words), is_longer_than);

  auto res = find_if(cbegin(words), cend(words), [n, &idx](const string &s) {
    ++idx;
    return s.size() > n;
  });

  //   great function
  auto greet = greeter("Hello"s);
  cout << greet("James"s) << endl;

  if (res != cend(words)) {
    cout << R"(The first word with more than )" << n << R"( characters is ")";
    cout << *res << R"(")" << endl;
    cout << "The index is at " << idx << endl;
  }
}
