// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum#include <iostream>
#include <iostream>
using namespace std;
// print nos. from 1 to 10 

int main()
{
    int numberToSum; float sum;
	cout << "Enter the numbers you want to sum ";
    cin >> numberToSum;
	while(numberToSum >= 0)// conditional stmt 
	{
        sum += numberToSum;
        cout << "Enter next number you want to sum ";
        cin >> numberToSum;
	}
    cout << "the total number is "<< sum << endl;
return 0;
}
