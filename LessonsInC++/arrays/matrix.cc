// matrix addtion
#include <iostream>
using namespace std;

int main()
{

 	int m1[2][3] = { {1, 4, 2}, {3, 6, 8} };
 	
 	int m2[2][3] = { {8, 1, 9}, {7, 10, 2} };
 	
 	int m3[2][3]; //= { {9,5,11},{10,16,10}}
 	int i,j;
 	cout<<"Addtion =\n";
 	for (i=0;i<2;i++)
	 {
	 	for (j=0;j<3;j++)
	 	{
	 		m3[i][j] = m1[i][j] + m2 [i][j];
	 		cout<<m3[i][j]<<"\t";
	 		
		 }
		cout<<"\n";
	  } 
	  
	  
}


