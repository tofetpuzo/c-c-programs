#include <iostream>
using namespace std;

int main()
{
	// pre-increment / decrement
	int i = 4;
	
	cout<<"line9:"<<--i<<endl;
	
	int result;
	
	result = i;
	
	cout<<"result="<<result<<endl;
	
	result -= --i ; //= result = result +  = 3  - 2 = 5
	
	cout<<"result="<<result;

}