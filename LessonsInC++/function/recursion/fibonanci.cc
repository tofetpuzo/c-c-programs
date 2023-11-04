#include <iostream>
using namespace std;
int fibonacci(int number)
{
    /* code */
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

int main()
{
    int number;
    cout << "Enter the fibonacci: ";
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    return 0;

    // while (number >= 0)
    // {
    //     cout << fibonacci(number) << ", ";
    //     number -= 1;
    // }
    // return 0;
}