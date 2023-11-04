#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string hello{"hello"};
    cout << "Hello = " << hello << endl;
    auto oops = hello.find('o');

    if (oops != string::npos)
        hello.insert(oops, 2, 'o');
    
    cout << "hello= " << hello << endl;
}
