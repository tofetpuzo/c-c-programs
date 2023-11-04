#include<iostream>
#include<string>
using namespace std;

//function to find the max. of 3 nos
int max_number(int no1, int no2,int no3)
{
    int max_number;

    if(no1 > no2 && no2)
    max_number = no1;

    else if(no2 > no1 && no3)
    max_number = no2;

    else if(no3 > no1 && no2)
    max_number = no3;

	return max_number;
	
}

double max_number(double no1, double no2,double no3)
{
    double max_number;

    if(no1 > no2 && no2)
    max_number = no1;

    else if(no2 > no1 && no3)
    max_number = no2;

    else if(no3 > no1 && no2)
    max_number = no3;

	return max_number;
	
}

int sum_total(){
    
    double sum = max_number(3, 4, 5) + max_number(5.3, 3.4, 3.5);
    cout << "sum = " << sum<<endl;
    return sum;
}

int main()
{
    sum_total();
	
	// int number1,number2,number3, max;

	// cout<<"Enter two float numbers you want to add " << endl;
    // cout<<"enter number 1 = ";
    // cin >> number1;

    // cout<<"enter number 2 = ";
    // cin >> number2;


    // cout<<"enter number 3 = ";
    // cin >> number3;

	
	// max = max_number(number1,number2, number3);
	
	// cout<<"The max number is = " << max << endl;
	
    return 0;
}