#include<iostream>
using namespace std;

//retrun type  function name (function parameters)
int add(int x, int y)
{

	cout<<"inside function";
	int result;  // local variable to function
	
	result = x + y;
	
	return result;
	
}
int main()
{
	
	int a,b,sum;
	a=10;
	b=20;
	
	cout<<"calling function";
	
	sum = add(a,b);
	
	cout<<"Addition ="<<sum;
	
    return 0;
}