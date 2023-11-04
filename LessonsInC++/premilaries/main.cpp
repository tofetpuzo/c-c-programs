#include <iostream>
#include <stdio.h>
using namespace std;
int a, b, c;
int main()
{
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " a is the highest number" << endl;
    }
    if (b >= a && b >= c)
    {
        cout << b  << " b is the highest number" << endl;
    }
    
    if (c >= b && c >= a)
    {
        // c=a/b;
        cout << c << " c is the highest number" << endl;
    }
    return 0;
}
