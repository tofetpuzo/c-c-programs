// function to calculate m power n
#include<iostream>
#include<string>
using namespace std;

//do a power of m n
int powers(int base, int exp) {
    double result = 1.0;
    bool negativeExponent = false;

    if (exp < 0) {
        negativeExponent = true;
        exp = -exp;
    }
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return (negativeExponent ? 1.0 / result : result);
}

int main()
{
	
	float base,exp,sum;

	cout<<"Enter two numbers " << endl;
    cout<<"enter number base = ";
    cin >> base;

    cout<<"enter number exponent = " ;
    cin >> exp;
	sum = powers(base,exp);
	
	cout<<"answer is  = "<<sum << endl;
	
    return 0;
}