// =====
// nested loops
#include <iostream>
using namespace std;

int main()
{

    // nested for loops
    int ans;
    for (int i = 1; i <= 8; i++) // outer for loop is used to represent the rows
    {
        cout << " * " << endl;
        for (int j = i; j <= 8; j++) // inner for loop is used to represent the column
        {
            
            ans = j * i;
            cout << "*	"<< ans;
        }
        cout << " * " << endl;
    }
}

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// *       1*      2*      3*      4*      5*      6*      7*      8 * 
// *       2*      4*      6*      8*      10*     12*     14*     16 * 
// *       3*      6*      9*      12*     15*     18*     21*     24 * 
// *       4*      8*      12*     16*     20*     24*     28*     32 * 
// *       5*      10*     15*     20*     25*     30*     35*     40 * 
// *       6*      12*     18*     24*     30*     36*     42*     48 * 
// *       7*      14*     21*     28*     35*     42*     49*     56 * 
// *       8*      16*     24*     32*     40*     48*     56*     64 * 