// size of  an array
#include <iostream>
using namespace std;

int main()
{

 	int array []  = {10,60,7,90,100,89}; // 4 bytes
 	
 	int size = sizeof(array);
 	
 	int length = sizeof(array)/sizeof(array[0]);
 	
 	cout<<"size of an array = "<<size<<"\n";
 	
 	cout<<"length of an array = "<<length<<"\n";
 	
 	for (int i=0;i<length;i++)
 		cout<<array[i]<<"\t";
	 
}