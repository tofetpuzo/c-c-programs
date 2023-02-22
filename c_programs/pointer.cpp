#include <iostream>

using namespace std;
int main()
{
    /* code */
    int x = 10;
    int *p;
    p = &x;
    cout << x << " \n";
    cout << p << " \n";
    cout << &x << " \n";
    cout << &p << " \n";
    cout << *p << " \n";

    return 0;
}
