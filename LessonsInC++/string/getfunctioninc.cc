// #include <iostream>
// using namespace std;

// int main () {

// 		char s[50];
		
// 		cout<<"Enter your name:";
		
// 		//cin.get(s,50); // enter kye will be treated as \0 char
		
// 	    cin.getline(s,50);  // you can 
		
// 		cout<<s;
	

// }


#include <cstring>
#include <iostream>
using namespace std;

int main() 
{
  char s1[] = "Programming"; 
  char s2[] = "ABC"; 
  
  cout<<strstr(s1,s2)<<endl;  
  
}