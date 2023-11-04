#include <iostream>
using namespace std;

int main () {

		char s[50];
		
		char s2[50];
		
		cout<<"Enter your name:";
		
		cin.get(s,50); // enter key will be treated as \0 char
		
			
		cout<<"Welcome "<<s<<endl;
		
		cin.ignore();   // it is used ignore a single character from the keyboard
		
		cout<<"Enter your name Again:";
		  
	    cin.getline(s2,50); 
	  
	  	cout<<"Welcome again:"<<s2<<endl; 
		
		
		
	return 0;
	

}
