#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

void print(const map<string, int> &scores) {
  cout << "Map contains: " << endl;
  for (auto it : scores) // use a range-based for loop to iterate over the map
  {
    cout << it.first << " has a score of " << it.second << endl;
  }

  cout << endl;
}

int main() {
  map<string, int> scores;
  scores.insert(make_pair("John", 100));
  scores.insert({"Graham", 78});

  cout << "calling print" << endl;
  print(scores);

  cout << "using structured bindomh" << endl;

  for (const auto &[key, value] : scores) {
    cout << key << " has a score of " << value << endl;
  }

  //   auto [iter, success] = scores.insert({"John", 77});

  //   if (success) {
  //     cout << "inserted successfully" << endl;
  //   } else {
  //     auto [name, score] = *iter;
  //     cout << "element with key " << name << " and value " << score
  //          << " already exists" << endl;
  //   }

  if (auto [iter2, success2] = scores.insert_or_assign("John", 89); success2) {
    //   if (success2) {
    cout << "inserted successfully" << endl;
  } else {
    auto [name, score] = *iter2;
    cout << "Existing element with name " << name << " and value " << score
         << " has been updated" << endl;
  }
  cout << endl;
  for (const auto &[key, value] : scores) {
    cout << key << " has a score of " << value << endl;
  }
}
