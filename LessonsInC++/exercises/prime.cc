# include<iostream>
using namespace std;
    
/*program for finding prime number*/
int main()
{
	int i,n;
	int count=0;
	cout<<"enter the number= ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
			count++;
			cout<<"count ="<<count<<endl;
	     }
	}  
	if(count==2)
		cout<<"prime number";
	else
		cout<<"not a prime number";     
	return 0;
}