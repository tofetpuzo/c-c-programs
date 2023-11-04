#include <iostream>
using namespace std;

int main()
{
	int *p;
	
	p = new int[4];
    
	p[0]=12;
	p[1]=25;
	p[2]=35;
	p[3]=75;
	
	cout<<p[1] + p[2]<<endl;
	
	cout<<"Address of p="<<p<<endl;
	
	delete []p;
	
	p=NULL;
	
	p = new int [10];  // dynamic memory allocation
	
	cout<<"Address of p="<<p<<endl;
	
	return 0;
}