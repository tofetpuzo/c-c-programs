// using the max and min functions

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string word1{"first word"}, word2{"second word"};
  auto max_args = max(word1, word2);
  auto min_args = min(word1, word2);

  cout << "max: " << max_args << endl;
  cout << "min: " << min_args << endl;

  // min and max with arguments

  auto max_pred = max(word1, word2, [](const auto &lhs, const auto &rhs) {
    return lhs.size() < rhs.size();
  });
  auto min_pred = min(word1, word2, [](const auto &lhs, const auto &rhs) {
    return lhs.size() < rhs.size();
  });

  cout << "max with predicated return: " << max_args << endl;
  cout << "min with predicated return: " << min_args << endl;

  //   we can use an intialiser

  auto max_init = max({"collection of", "strings", "in", "a", "vector"});
  auto min_init = min({"collection of", "strings", "in", "a", "vector"});

  cout << "max with initialiser: " << max_init << endl;

  cout << "min with initialiser: " << min_init << endl;

  //   minmax() takes arguments or an initialiser list
  auto [min, max] = minmax({"collection of", "strings", "in", "a", "vector"});

  cout << "minmax with initialiser: " << min << ", " << max << endl;

  //   minmax_element() takes iterators
  vector<string> vec{"collection of", "strings", "in", "a", "vector"};
  auto [min_it, max_it] = minmax_element(begin(vec), end(vec));

  cout << "minmax_element with iterators: " << *min_it << ", " << *max_it
       << endl;

  auto max_words =
      max_element(begin(vec), end(vec), [](const auto &lhs, const auto &rhs) {
        return lhs.size() < rhs.size();
      });
  auto min_words =
      min_element(begin(vec), end(vec), [](const auto &lhs, const auto &rhs) {
        return lhs.size() < rhs.size();
      });

  cout << "max_element with iterators: " << *max_words << endl;
  cout << "min_element with iterators: " << *min_words << endl;
}