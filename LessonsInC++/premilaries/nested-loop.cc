// =====
// nested loops
#include <iostream>
using namespace std;

int main()
{

    // nested for loops

    for (int i = 1; i <= 4; i++) // outer for loop is used to represent the rows
    {
        for (int j = 1; j <= i; j++) // inner for loop is used to represent the column
        {
            cout << "	" << j;
        }
        cout << endl;
    }
}