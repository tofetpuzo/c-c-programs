//  2. avg. of all elements in an array print sum and avg. as output
#include <iostream>
using namespace std;

// the return does not print out
// find max and min element in an array
int main()
{
	
	int numArray[]= {66, 78, 290, 90, 68};
	double sum=0; float avg;
	for(int i=0; i<=4; i++){
       sum += numArray[i];    
    }
    avg = sum/5;
    cout << "the sum number is = " << sum << " the min number is = " << avg << endl;			
	return 0;
}
