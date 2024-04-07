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
  auto start = gra_keys.first;
  auto finish = gra_keys.second;

  //   call find_if to find the first element with a value of 67
  //   auto it = find_if(start, finish, [](const pair<string, int> &score) {
  //     return score.second == 67;
  //   });

  //   if (it != finish) {
  //     cout << "Found an element with value 67" << endl;
  //     printMap(*it);
  //   } else {
  //     cout << "Element with value 67 not found" << endl;
  //   }

  auto res = find_if(start, finish, [](const pair<string, int> &score) {
    return score.second == 67;
  });

  while (res != finish) {
    results.push_back(*res);
    ++res;
    res = find_if(res, finish, [](const pair<string, int> score) {
      return score.second == 67;
    });
  }
  for (auto result : results)
    printMap(result);

  cout << endl;
}