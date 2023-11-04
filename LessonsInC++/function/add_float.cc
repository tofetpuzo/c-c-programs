#include<iostream>
#include<string>
using namespace std;

//add two float numbers
int add_float_numbers(float x, float y)
{

	cout<<"inside function";
	float result;  // local variable to function
	
	result = x + y;
	
	return result;
	
}
int main()
{
	
	float number1,number2,sum;

	cout<<"Enter two float numbers you want to add " << endl;
    cout<<"enter number 1 = " << endl;
    cin >> number1;

    cout<<"enter number 2 = " << endl;
    cin >> number2;

	
	sum = add_float_numbers(number1,number2);
	
	cout<<"Addition = "<<sum;
	
    return 0;
}