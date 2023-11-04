#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int x{2};
  bool is_negative = x < 0;

  cout << "the value of is_negative is: " << is_negative << endl;
  cout << "is negative is: " << boolalpha << is_negative << endl;
  cout << "x == 2 is: " << (x == 2) << endl;
  cout << "the numberical value of \"false\" is " << noboolalpha << false
       << endl;

  cout << setw(15) << left << "Penguins" << 5 << endl;
  cout << setw(15) << left << "Polar Bears " << 2 << endl;

  //   set fill
  cout << setfill('*');
  cout << left << setw(15) << "Penguins" << 5 << endl;
  cout << setw(15) << left << "Polar Bears " << 2 << endl;
  cout << right;
  cout << setfill(' ');
  cout << setw(15) << "Hippotameous";
}