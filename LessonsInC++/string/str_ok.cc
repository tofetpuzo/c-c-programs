// strtok
#include <iostream>
#include <cstring>

using namespace std;

int main () {

   char str1[20] = "x=10;y=20;z=30";
   
  // char *toeken = str1  -- this will point to address of X

   char *token=strtok(str1,";"); // ("string","deleimiter")
   
   cout<<token<<endl;  // this will print first element  x = 10
	
	cout<<"inside while"<<endl;
    while(token!=NULL)
	{
		
		cout<<token<<endl;
		token=strtok(NULL,"?");
    }

   return 0;
}