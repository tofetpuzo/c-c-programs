// Program to Find Sum of Diagonals of Matrix
#include <iostream>
using namespace std;

int main()
{

 	int m1[3][3] = { {1, 4, 2}, {3, 6, 8}, {9, 10, 11} };
  int sum = 0; int sum2 = 0;
      // 0   1     2     3
// 0 //  1   4     2      1 3 9
// 1 //  3   6     8      4 6 10
// 2 //  9   10   11      2 8 11
// 3     4
// 00, 11, 22 => 02, 11, 20
  for (int i=0; i < 3; i++)
	   {
        for (int j=0; j < 3; j++)
            {
            //   sum += m1[i+1][j-1]; 
              if(j == i  || (j && i >2))
              sum+=m1[i][j];

              if((j + i) == 2)
              sum2 += m1[i][j];         
            }
     }
    cout << "This is the first diagonal = " <<  sum << endl;
     cout<< "This is the second diagonal = " << sum2 << endl;
}