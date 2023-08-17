#include <iostream>

using namespace std;


int main(){
    int mark;
    cin >> mark;
    switch(mark)
    {
    	case 60: 
    		cout << "First class: " << endl;
    		break;
       	case 50: 
    		cout << "second class: " << endl;
    		break;
    	default:
    		cout<<"invalid marks"<<endl;	
    	
	}
}



    /// check whether can we use logical operators in switch case for operator