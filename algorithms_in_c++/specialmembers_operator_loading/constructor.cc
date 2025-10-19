#include <iostream>

using namespace std;

class Internet {
public:
  void connect() { cout << "Connecting to the internet" << endl; }
  void login(const string &id, const string &password) {
    cout << "Logging in with id: " << id << " and password: " << password
         << endl;
  }
};

class refrigirator {
  int temperature{2};
  bool door_open{false};
  bool power_on{true};
  Internet internet;

public:
  // default constructor
  refrigirator() : refrigirator{2, "me", "secret"} {}
  // constructor using default login
  refrigirator(const string &id, const string &password)
      : refrigirator{2, id, password} {}
  // constructor using default login and temperature
  refrigirator(int temp, const string &id, const string &password)
      : temperature{temp} {
    internet.connect();
    internet.login(id, password);
  }
  void print() {
    cout << "Temperature: " << temperature << endl;
    cout << boolalpha;
    cout << "Door open: " << door_open << endl;
    cout << "Power on: " << power_on << endl;
    cout << noboolalpha;
  }
};

int main() {
  refrigirator fridge;
  fridge.print();
}

// default constructor
//   refrigirator() {
//     internet.connect();
//     internet.login("user", "password");
//   }
//   refrigirator() { init("me", "secret"); } // default temperature
//   refrigirator(int temp) : temperature{temp} {
//     internet.connect();
//     internet.login("user", "password");
//   }

//   //   constructor using default login
//   void init(const string &id, const string &password) {
//     internet.connect();
//     internet.login(id, password);
//   }

//   //   constructor using default login and temperature
//   refrigirator(const string &id, const string &password, int temp)
//       : temperature{temp} {
//     internet.connect();
//     internet.login(id, password);
//   }
