#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};

    int *p = A, *q = &A[4]; // *p will point to the first element in an array

    cout << "value of p =" << *p << endl;

    cout << "value of q =" << *q << endl;

    cout << "Address of P before increment =" << p << endl;

    p++; // it will move to the next adress into an array

    cout << "Address of after increment P =" << p << endl;

    cout << "value of p after increment =" << *p << endl; // print 4

    p--;

    cout << "value of p after decrement =" << *p;
}