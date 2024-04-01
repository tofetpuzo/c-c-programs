#include <iostream>
#include <map>
#include <string>

using namespace std;

void printMap(const map<string, int> &scores) {
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
  scores.insert(make_pair("Doe", 200));
  scores.insert(make_pair("Jane", 300));
  scores.insert(make_pair("Smith", 400));
  scores.insert(make_pair("Doe", 500));

  printMap(scores);

  cout << "adding element with key John and value 100" << endl;
}