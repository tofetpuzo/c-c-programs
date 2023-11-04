// # 2. multiplication table

// =====
// nested loops
#include <iostream>
using namespace std;

int main()
{

    // nested for loops
    int ans, number;
    cout << "enter the number you want to the mulitplication table: ";
    cin >> number;
    for (int i = 1; i <= 13; i++) // outer for loop is used to represent the rows
    {
        for (int j = 1; j <= number; j++) // inner for loop is used to represent the column
        {
            ans = j * i;       
        }
       cout << number <<   " * " << i  << " = " <<  ans << endl;
    }
}

