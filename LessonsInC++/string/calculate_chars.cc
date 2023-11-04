#include <iostream>
using namespace std;

int main() 
{
  char A[] = "245";
  
  char B[] = "54.45";
  
  int x = strtol(A,NULL,8);
  
   cout<<"x= "<<x+10<<endl;
  
   float y = strtof(B,NULL);
  
  cout<<"y= "<<y+20.5<<endl;
  
 return 0; 
  
 
}