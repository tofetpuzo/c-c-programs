#include <iostream>
#include <map>
#include <string>

using namespace std;

class refrigirator {
  int temperature;
  bool door_open;
  bool power_on;

public:
  refrigirator(int temperature, bool door_open, bool power_on)
      : temperature(temperature), door_open(door_open), power_on(power_on) {}
  void print() {
    cout << "Temperature: " << temperature << std::endl;
    cout << boolalpha;
    cout << "Door open: " << door_open << std::endl;
    cout << "Power on: " << power_on << std::endl;
  }
};

int main() {
  map<string, refrigirator> fridges;
  refrigirator meat_fridge(4, false, true);
  fridges.insert({"Meat fridge", meat_fridge});

  fridges.insert_or_assign("Veggie fridge", refrigirator(3, true, true));

  auto [iter, success] = fridges.try_emplace("Not in use", 5, false, false);

  if (success) {
    cout << "The fridge was successfully emplaced\n";
  } else {
    auto [name, fridge] = *iter;
    cout << "Insert failed: ";
    cout << name << " already exists\n";
    fridge.print();
    cout << endl;
  }
  for (auto &[name, fridge] : fridges) {
    cout << name << ":\n";
    fridge.print();
    cout << endl;
  }
}