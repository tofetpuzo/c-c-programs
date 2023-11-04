#include <iostream>
using namespace std;

// the return does not print out
// find max and min element in an array
int main()
{
	
	int numArray[]= {0, 66, 78, 290, 2, 90, 68, 10000, 5000};
	int max = 0;
    int min = numArray[0];
	for(int i=0; i<=7;){
        if(max < numArray[i]){
            max = numArray[i];         
        }
        else if( min > numArray[i]){
            min = numArray[i];       
        }
        i++; 
    }
    cout << "the max number is = " << max << " the min number is = " << min << endl;			
	return 0;
}

