#include <iostream>
using namespace std;
// print nos. from 1 to 10 

int main()
{
	int a=1;  // initilization 
	cout<<"while loop"<<endl;
	while(a<=10)// conditional stmt 
	{
		cout<<"a = "<<a<<endl;
		if (a == 5)
			break;
		a= a + 1; // incremnet or decrement 
	}
/*	cout<<"do while loop"<<endl;
	int b=1;  // initilization
	do
	{
		cout<<"b = "<<b<<endl;  //statement 
		b = b + 1;   // increment or decrement
		if (b == 5)
			break;
	}while(b<=10);  // condtion */
return 0;
}


#include <iostream>
using namespace std;

int main()
{
	int a=1;  // initilization  ..condition .. inrement or decrement 
	while (true)
	{
		cout<<"a= "<<a<<endl;
		a = a + 1;
	}
	return 0;
}
// • Loops are iterative statements
// • Block of statements are repeatedly executed as long as condition is true
// • Condition given in loop must become false after some finite iterations otherwise its a
// infinite loop
// • Values used in condition must update inside the body of finite loop
// • Four types of loops
// ••
// pre-tested loop while()
// • post-tested loop do..while()
// • counter controlled loop for()
// • for each loop for Collections for()

