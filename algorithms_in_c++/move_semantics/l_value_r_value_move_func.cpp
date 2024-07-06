#include <iostream>
#include <string>

using namespace std;

void test(const string &lref)
{
    cout << "lvalue reference " << endl;
}

void test(string &&rref)
{
    cout << "rvalue reference " << endl;
}

int main()
{
    string l{string{"Perm"}};
    string lr{l};

    cout << "Lvalue reference: " << lr << endl;

    cout << "Temporary object: ";
    test(string{"Temp"});

    cout << "Lvalue: ";
    test(l);

    cout << "Rvalue: ";
    test(move(l));
}