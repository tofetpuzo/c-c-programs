#include <iostream>
#include <string>

using namespace std;

class Test{
    string m_str;
public:
    Test(const string& str): m_str(str){} // copy constructor
    Test(string&& str): m_str(std::move(str)){} // move constructor
};

int main() {
    string str = "Hello Move Semantics";
    cout << "Passing by value with l-value:" << endl;

    Test ltest(str); // l-value passed - copy constructor called
    cout << "str after copy: '" << str << "'" << endl; // str is unchanged

    cout << "Passing by value with r-value:" << endl;

    Test rtest(std::move(str)); // r-value passed - move constructor called
    cout << "str after move: '" << str << "'" << endl; // str is in a valid but unspecified state
    return 0;

}
