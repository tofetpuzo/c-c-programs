#include <iostream>
#include <cstring>
using namespace std;





int main() 
{
   char s1[] = "ABC"; // A =65
   char s2[] = "ABC"; //  a = 97
  
   cout<<strcmp(s1,s2)<<endl;  // 0 
  
   char s3[] = "ABC"; // A =65
   char s4[] = "aBC"; //  a = 97  
  
   cout<<strcmp(s3,s4)<<endl;  // -1
   
   char s5[] = "aBC"; // A =65
   char s6[] = "ABC"; //  a = 97
  
   cout<<strcmp(s5,s6)<<endl;   // 1
}
