#include <iostream>

using namespace std;

class Test {
  int time{10};

public:
  void countdown() {
    [this]() mutable {
      if (time > 0)
        cout << time << endl;
      else if (time == 0)
        cout << "Liff off" << endl;
      --time;
    }();
  }
};

int main() {
  Test t;
  for (int i = 0; i < 12; i++) {
    t.countdown();
  }
  int x{42}, y{99}, z{0};

  auto lam = [=, &z]() mutable {
    ++x;
    ++y;
    z = x + y;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
  };
  lam();
  lam();
};