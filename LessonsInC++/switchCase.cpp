#include <iostream>

using namespace std;

int main()
{
    int dayofweek;
    cout << "Enter the number you want to see the day of the week for: ";
    cin >> dayofweek;
    
    switch(dayofweek)
    {
    	case 1: 
    		cout << " Today is Monday " << endl;
    		break;
       	case 2: 
    		cout << " Today is Tuesday " << endl;
    		break;

        case 3: 
    		cout << " Today is Wednesday " << endl;
    		break;

        case 4: 
    		cout << " Today is Thursday " << endl;
    		break;

        case 5: 
    		cout << " Today is Friday " << endl;
    		break;  

        case 6: 
    		cout << " Today is Saturday " << endl;
    		break;  

    	case 7: 
    		cout << " Today is Sunday " << endl;
    		break;
    	default:
    		cout<<" invalid date "<<endl;	
    	
	}
}