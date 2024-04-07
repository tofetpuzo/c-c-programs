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
  print(game_map);

  cout << "Inserting a new entity into level 2\n";

  auto level_two = game_map.find(2);
  if (level_two != game_map.end()) {
    level_two->second.insert({3, "magic wand"});
  }
  print(game_map);

  cout << "Inserting a new level 3\n";

  game_map.insert({3, {{2, "player2"}, {5, "animal"}}});
  print(game_map);

  cout << "Removing the player from level 2\n";

  auto &lmap = level_two->second;
  auto ten = lmap.find(10);
  if (ten != lmap.end()) {
    lmap.erase(ten);
  }
  print(game_map);
}