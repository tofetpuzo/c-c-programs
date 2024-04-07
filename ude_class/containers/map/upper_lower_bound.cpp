#include <iostream>
#include <map>

using namespace std;

void printMap(const pair<string, int> &score) {
  cout << "(\"" << score.first << "\", " << score.second << "), \n";
}

int main() {
  multimap<string, int> mmap;
  mmap.insert({"John", 45});
  mmap.insert({"Doe", 67});
  mmap.insert({"Jane", 67});
  mmap.insert({"Smith", 66});
  mmap.insert({"Harse", 77});
  mmap.insert({"Doe", 67});

  cout << "Multimap contains: " << endl;
  for (auto score : mmap) {
    printMap(score);
  }
  //   elements are in the order John, Doe, Jane, Smith, Harse, Doe
  auto grade_first = mmap.lower_bound("Doe");
  auto grade_last = mmap.upper_bound("Doe");

  cout << endl << "Scores for Doe: " << endl;
  for (auto it = grade_first; it != grade_last; ++it)
    printMap(*it);
  cout << endl;

  //   elements not found in the map
  auto grade_first2 = mmap.lower_bound("James");
  auto grade_last2 = mmap.upper_bound("James");

  cout << endl << endl << "lower_bound(\"James\") returned: ";
  printMap(*grade_first2);
  cout << endl;

  cout << endl << endl << "upper_bound(\"James\") returned: ";
  printMap(*grade_last2);
  cout << endl;

  cout << endl << "Scores for James: " << endl;
  for (auto it = grade_first2; it != grade_last2; ++it)
    printMap(*it);

  // using equal
  auto grade_keys = mmap.equal_range("Doe");
  auto start = grade_keys.first;
  auto finish = grade_keys.second;

  cout << endl << "Scores for Doe: " << endl;
  for (auto it = start; it != finish; ++it)
    printMap(*it);
  cout << endl;
}