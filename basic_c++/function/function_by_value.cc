#include <iostream>
using namespace std;

// retrun type  function name (function parameters)
void swap(int *a, int *b) const// these are know an formal parameters
{
    int temp;

    cout << "inside swap function before swap" << endl;
    cout << "a=" << a << endl; // a = 20
    cout << "b=" << b << endl; // b = 10

    temp = *a; // tmep =10
    *a = *b;   // x = 20
    *b = temp; // y = 10;

    cout << "inside swap function after swap" << endl;
    cout << "a=" << a << endl; // a = 20
    cout << "b=" << b << endl; // b = 10
}
int main()
{
    int x, y;

    x = 10;
    y = 20;

    cout << "inside main function before swap" << endl;
    cout << "a=" << &x << endl; // a = 20
    cout << "b=" << &y << endl; // b = 10

    swap(&x, &y); // function calling by address  // a & b are know as acual parameters

    cout << "inside main function after swap" << endl;
    cout << "x = " << x << endl; // a = 20
    cout << "y = " << y << endl; // b = 10

    return 0;
}
