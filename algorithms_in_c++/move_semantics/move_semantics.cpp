#include <iostream>

using namespace std;

int get_value()
{
    return 10;
}

void func(const int &ri) // cannot overload functions distinguished by return type alone; add a const qualifier to the parameter
{
    cout << ri << endl;
}

int main()
{
    func(get_value()); // return value from get_value() is an rvalue
    return 0;          // rvalue is passed to a const reference
}