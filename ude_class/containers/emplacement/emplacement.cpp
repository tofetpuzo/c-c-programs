#include <iostream>
#include <string>
#include <vector>

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
  vector<refrigirator> vec;
  refrigirator fridge(4, false, true);
  vec.insert(begin(vec), fridge);
  vec.insert(end(vec),
             {refrigirator(3, true, true), refrigirator(5, false, false)});
  vec.emplace(begin(vec), 2, true, false);

  cout << "using emplace_back\n";
  vec.emplace_back(6, true, true);
  cout << "using push back\n";
  vec.push_back(refrigirator(7, false, false));

  for (auto &r : vec) {
    r.print();
    cout << endl;
  }
}