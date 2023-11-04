#include <iostream>
#include <string>
using namespace std;

int main()
{
	//data_type 
	
	string str = "Welcome";
	
	char s1[6];
	
	char s2[6];
	
	str.copy(s1,str.length());
	
	cout<<s1<<endl;
	
	str.copy(s2,3); // '\0' is not available into string
	
	s2[3]='\0';
	
	cout<<s2<<endl;
    cout<<str.front() <<endl;
	
	
	return 0;
}