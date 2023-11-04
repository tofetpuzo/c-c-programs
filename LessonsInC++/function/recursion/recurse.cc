#include<iostream>
using namespace std;
// 5-4-3-2-1
// recrussion

void fun(int n)
{
	if(n>0)
	{
		cout<<n;  // 5 4 
		
		fun(n-1);     // calling a fucntion fun(4)
	}
}

int main()
{
	int x = 5;
	fun(x);
		
}
