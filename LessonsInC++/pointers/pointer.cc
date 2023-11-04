#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *p = &x; // hold the address of x

    cout << "value x=" << x << "\n";

    cout << "Address of x=" << &x << "\n";

    cout << "P=" << p << "\n";

    cout << "Adress of p= " << &p << "\n";

    cout << "value of p/x=" << *p << "\n";

    ++p;

    cout << "value =" << p << "\n";

    return 0;
}