// Program to Find Transpose of a Matrix
#include <iostream>
using namespace std;

int main()
{

 	int m1[4][4] = { {1, 4, 2, 5}, {3, 6, 8, 6}, {9, 10, 11,6} };
    int m2[4][4];
       
    // 1 4 2  1 3 9
    // 3 6 8   4 6 10
    // 9 10 11  2 8 11

    for (int i=0; i < 4; i++)
	 {
        for (int j=0; j < 4; j++)
            {
              m2[i][j] = m1[j][i]; 
                cout <<  m2[i][j]  << " ";
                // Print a new line after every third element
                if ((j + 1) % 4 == 0) {
                    cout << std::endl;
                }        
            }
     }
    return 0;
}