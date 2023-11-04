#include <iostream>

using namespace std;

int main() {
  // int a, b, c;
  // cout << "Enter a and b numbers";
  // cin >> a >> b;
  // c = a + b;
  // cout << "addition of the code is " << c;
  // return 0;

  // int A[] = {2, 4, 6, 8, 10};

  int A[] = {2, 4, 11, 8, 10, 15, 13}, n = 7;
  int sum = 0;
  // use foreach loop to display all emelents from Array;
  // for (int i : A)
  // {
  //     std::cout << " " << i;
  // }
  // use foreach loop to display all emelents from Array;
  for (int i = 0; i < n; i++) {
    sum += A[i];
  }
  std::cout << sum;

  double x = 2 * 3.9 + ('A' * 5UL);
  int a = 25, b = 9;
  cout << (~a);
  cout << (a | b);
  cout << x;
};