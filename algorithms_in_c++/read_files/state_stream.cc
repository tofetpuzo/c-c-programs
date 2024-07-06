#include <fstream>
#include <iostream>
#include <limits>

using namespace std;

int main() {
  int x{0};

  cout << "Enter a number: ";
  cin >> x;
  bool success{false};
  while (!success) {
    if (cin.good()) {
      cout << "x = " << x << endl;
      success = true;
    } else if (cin.fail()) {
      cout << "please try again and enter a number" << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> x;
    }
  }

  // ifstream ifile("text_out.txt");

  // cout << "Enter a number: ";
  // cin >> x;

  // if (cin.good()) {
  //   cout << "x = " << x << endl;
  // } else if (cin.fail()) {
  //   cout << "please try again and enter a number" << endl;
  //   return -1;
  // } else if (cin.bad()) {
  //   cout << "something seriously went bad" << endl;
  //   return -1;
  // } else if (cin.eof()) {
  //   cout << "end of file has been reached" << endl;
  //   return -1;
  // }
  // while (ifile >> x) {
  //   /* code */
  //   cout << "x = " << x << endl;
  // }
  // cout << "end of file has been reached" << endl;
}