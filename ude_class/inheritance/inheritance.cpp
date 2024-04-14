#include <iostream>

using namespace std;

class Vehicle {
protected:
  void kids_only();

public:
  void start() { cout << "Vehicle started: "; }
};

class Aeroplane : public Vehicle {
public:
  void start() {
    cout << "Aeroplane flying...";
    Vehicle::start();
    cout << "Ready for take off";
  }

  void do_something() { kids_only(); }
};

int main() {
  Aeroplane aero;
  Vehicle veh;
  aero.start();
  cout << "\n";
  veh.kids_only();
}