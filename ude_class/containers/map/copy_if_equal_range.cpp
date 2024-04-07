#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void printMap(const pair<string, int> &score) {
  cout << "(\"" << score.first << "\", " << score.second << "), \n";
}

int main() {
  multimap<string, int> scores;
  scores.insert({"John", 45});
  scores.insert({"Doe", 67});
  scores.insert({"Jane", 67});
  scores.insert({"Smith", 66});
  scores.insert({"Harse", 77});
  scores.insert({"Doe", 67});

  cout << "Multimap contains: " << endl;
  for (auto score : scores) {
    printMap(score);
    cout << endl;
  }

  vector<pair<string, int>> results;

  auto gra_keys = scores.equal_range("Doe");

  copy_if(gra_keys.first, gra_keys.second, back_inserter(results),
          [](const pair<string, int> &score) { return score.second == 67; });

  for (auto result : results)
    printMap(result);
}