#include <iostream>
using namespace std;
// default arguments 

/*int add(int x, int y)
{
	int sum;
	sum = x +y;
	return sum;
}*/
int add(int a=100,int =0, int c=0)
{
	int sum;
	sum = a+b+c;
	return sum;
	
}
int main()
{
	int result;
	
	result = add();
	
	cout<<"Result="<<result<<endl; // 100
	
	result = add(10); 
	
	cout<<"Result="<<result<<endl; // 10
	
	result = add(10,20); 
	
	cout<<"Result="<<result<<endl;  // 30
	
	result = add(10,20,30); 
	cout<<"Result="<<result<<endl; // 60
}