#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<string, int> find_index(const vector<string> &vec, int max) {
  int idx{-1};
  auto res = find_if(cbegin(vec), cend(vec), [max, &idx](const string &str) {
    ++idx;
    return str.size() > max;
  });

  if (res != cend(vec))
    return {res->c_str(), idx};
  else
    return {""s, idx};
}

auto find_index2(const vector<string> &vec, int max) {
  int idx{-1};
  auto res = find_if(cbegin(vec), cend(vec), [max, &idx](const string &str) {
    ++idx;
    return str.size() > max;
  });

  if (res != cend(vec))
    return pair{res->c_str(), idx};
  else
    return pair{res->c_str(), idx};
}

int main() {
  vector<string> vec{"Hello", "World", "Bond", "007", "James Ibori"};
  auto res = find_index2(vec, 5);
  cout << "The first string with more than 5 characters is \"" << res.first
       << "\" at index " << res.second << endl;
}