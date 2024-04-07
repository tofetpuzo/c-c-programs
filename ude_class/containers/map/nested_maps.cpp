#include <iostream>
#include <map>
#include <string>

using namespace std;
using level_map = map<int, string>;

void print(const map<int, level_map> &game_map) {
  for (auto [l_no, l_map] : game_map) {
    cout << "Level " << l_no << endl;
    for (auto [position, object] : l_map) {
      cout << "position =  " << position << ", object = " << object << endl;
    }
  }
  cout << endl;
}

int main() {
  level_map level_one_map = {{1, "player"}, {10, "door"}};
  level_map level_two_map = {{5, "player"}, {10, "monster"}};
  map<int, level_map> game_map = {{1, level_one_map}, {2, level_two_map}};

  cout << "Game map" << endl;
  //   for (auto level : game_map) {
  //     cout << "Level " << level.first << endl;
  //     for (auto item : level.second) {
  //       cout << "  " << item.first << ": " << item.second << endl;
  //     }
  //   }
}