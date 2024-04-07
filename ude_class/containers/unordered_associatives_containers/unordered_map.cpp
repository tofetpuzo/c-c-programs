#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
  //   unordered_map<string, int> scores;
  unordered_multimap<string, int> scores;
  scores.insert({"John", 45});
  scores.insert({"Doe", 97});
  scores.insert({"Smith", 66});
  scores.insert({"Harse", 77});
  scores.insert({"Doe", 67});
  scores.insert({"James", 12});

  cout << "Unordered map contains: " << endl;
  for (auto score : scores) {
    cout << "(\"" << score.first << "\", " << score.second << "), \n";
  }
  cout << endl;

  auto it = scores.find("Doe");
  if (it != scores.end()) {
    cout << "Found Doe in the map" << endl;
    cout << "Value is: " << it->second << endl;
  } else {
    cout << "Did not find Doe in the map" << endl;
  }

  multimap<string, int> scores2;
  copy(scores.begin(), scores.end(), inserter(scores2, scores2.end()));

  cout << "Multimap contains: " << endl;
  for (auto score : scores2) {
    cout << "(\"" << score.first << "\", " << score.second << "), \n";
  }
}