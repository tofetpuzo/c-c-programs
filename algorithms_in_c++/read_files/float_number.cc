#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double pi{3.141'592'653'5};

  int precision{3}, default_precision{6};
  cout << "Pi to " << precision << " significant figures is ";

  cout << setprecision(precision) << pi << endl;

  cout << "Pi to " << default_precision << " significant figures is ";
  cout << setprecision(default_precision) << pi << endl;

  // PI WITHOUT MANIPULATORS
  cout << pi << endl;
  cout << scientific << uppercase << pi << endl;

  double c{299'792'458};
  double m{1.989'1e-30};
  cout << fixed << c << endl;
  cout << fixed << m << endl;
  cout << c << endl;
}