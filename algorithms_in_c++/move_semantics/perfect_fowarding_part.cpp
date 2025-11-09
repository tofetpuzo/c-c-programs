#include <iostream>

using namespace std;

class Test{
    string m_str;
public:
    Test(const string& str): m_str(str){
        cout << "Copy string& constructor called" << endl;
    } 
    Test(string&& str): m_str(std::move(str)){
        cout << "string&& constructor called\n" << endl;
    }
};

void g(string& x) {
    cout << "modified version of g called with l-value reference" << endl;
}
void g(const string& x) {
    cout << "immutable version of g called with const l-value reference" << endl;
}
void g(string&& x) {
    cout << "modified version of g called with r-value reference" << endl;
}

template<class T>
Test make_test(T&& param) {
    // Forwarding reference: can bind to both l-values and r-values
    g(std::forward<T>(param)); // forwards param preserving its value category
    return Test(std::forward<T>(param)); // perfect forwarding to Test constructor
}
int main() {
    string str = "Hello Perfect Forwarding";
    cout << "Calling make_test() with l-value:\n";
    Test ltest = make_test(str);

    cout << "\nCalling make_test() with r-value:\n";
    Test rtest = make_test(std::move(str));

    cout << endl;
    return 0;
}