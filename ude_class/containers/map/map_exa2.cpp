#include <algorithm>
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
  scores.insert(make_pair("Maybelline", 100));
  scores.insert({"Grace", 200});
  scores.insert({"Graham", 300});

  printMap(scores);

  cout << "Grahm has a score of " << scores["Graham"] << endl;
  printMap(scores);

  cout << "Setting Graham's score to 300" << endl;

  scores["Graham"] = 900;
  printMap(scores);

  cout << "Adding Grace'score  of 200" << endl;
  scores["Grace"] = 75;
  scores["John"] = 70;
  printMap(scores);

  cout << "Calling find(\"Grace\")\n" << endl;
  //   auto gra = scores.find("Grace");
  auto gra =
      find_if(begin(scores), end(scores),
              [](const pair<string, int> &p) { return p.first == "Grace"; });

  if (gra != scores.end()) {
    cout << "Found an element with key";
    cout << gra->first << " and value " << gra->second << endl;
    // cout << "Changing Graham's name to Gra\n" << endl;
    // gra->first = "Gra";
    cout << "Changing Grace's score to 100\n" << endl;
    gra->second = 100;
    printMap(scores);
  } else {
    cout << "Grace not found" << endl;
  }
  cout << "Calling count\n";
  //   auto n = scores.count("Grace");
  auto n =
      count_if(cbegin(scores), cend(scores),
               [](const pair<string, int> &p) { return p.first == "Grace"; });

  if (n == 1) {
    cout << "Grace is in the map" << endl;
  } else {
    cout << "Grace is not in the map" << endl;
  }
}