// factorial of a number using recurive function
#include <iostream>
using namespace std;
int factorial(int number)
{
    if (number == 0 || number == 1)
        return number;
    else
        return number * factorial(number - 1);
}
int main()
{
    int number;
    cout << "Enter the factorial number: ";
    cin >> number;
    cout << factorial(number) << endl;
}