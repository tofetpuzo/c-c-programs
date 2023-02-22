#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
    /* code */
    int x = 10;
    int *p;
    p = &x;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    cout << x << " \n";
    cout << p << " \n";
    cout << &x << " \n";
    cout << &p << " \n";
    cout << *p << " \n";

    return 0;
}
