// function
#include<iostream>
using namespace std;

//retrun type  function name
void display()
{
	cout<<"Hello World"<<endl;   // cout and cin stmt should be avoided
	
}

int main()
{
	display();  // function calling by name
	cout<<"again calling function"<<endl;
	display();
	
	return 0;
		
}