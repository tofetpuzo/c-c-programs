#include <iostream>
using namespace std;

int main()
{
	// pre-increment / decrement
	int i = 1;
	
	++i;
	
	int result;
	
	result = i;
	
	cout<<"result="<<result<<endl;
	
	result += ++i; //= result = result + 3 = 2  + 3 = 5
	
	cout<<"result="<<result;

}