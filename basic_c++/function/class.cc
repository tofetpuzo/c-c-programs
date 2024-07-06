#include<iostream>
using namespace std;

// class Test{};

// static Test& operator = (const Test& other, int i, string str){
//     i = other.i; 
//     str = other.str;

//     return *this;

// }
//retrun type  function name
int main()
{
    int i{1};
    int *p1 = &i;

    cout << p1 << endl;
    cout << *p1 << endl;

    int *p2 = new int;
    int *p3 = new int{36};

    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
}