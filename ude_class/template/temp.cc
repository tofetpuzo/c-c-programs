#include <iostream>
using namespace std;

// function template for finding maximum of two values
template <class T>
T Max(const T& t1, const T& t2){
    if(t1>t2)
        return t1;
    return t2; 
}

int main(){
    cout << Max(7.0, 21.6) << endl;
}