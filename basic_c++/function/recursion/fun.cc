#include <iostream>
using namespace std;

// Function for Multiplication
int multiply(int a, int b)
{

    return a * b;
}

// Function containing function pointer
// as parameter
void print(int (*funcptr)(int, int)) // int (*fp)();
{
    funcptr = multiply;
    int m, n;
    m = 10;
    n = 5;

    cout << "The value of the product is: " << funcptr(m, n)
         << endl;
}

// Driver Function
int main()
{
    print(multiply);
    return 0;
}