// # 3. find the sum of natural numbers
# include<iostream>
using namespace std;
    
/*program for sum of natural numbers using for loops

*/
int main()
{
	int n,i,sum=0;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    sum=sum+i;
	}
	cout<<"sum of natural no is"<<sum<<endl;
	return 0;
}