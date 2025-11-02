// pass argument by value and move it into a member variable
// pass by value
/* copy constructor called */
/* function has its own copy of the caller's object */
// * caller's object is unmodified

/* pass by const reference */
/* function has read-only access to caller's object */
/* caller's object is unmodified */

// pass by non-const reference and pass by address
/* function has read-write access to caller's object */
/* caller's object may be modified */

// * pass by move
/* move constructor called */
/* function takes ownership of caller's object */
// * caller's object is unusable(until re-assigned)

#include <iostream>
#include <string>

using namespace std;

class Test{
    string m_str;
public:
    Test(const string& str): m_str(std::move(str)){
        cout << "constructor called" << endl;
    }
};

int main() {

    string str = "Hello Move Semantics";
    cout << "Passing by value:" << endl;

    Test ltest(str); // l-value passed - name is copied into str copy str into t1
    cout << "str after copy: '" << str << "'" << endl; // str is unchanged

    cout << "Passing by move:" << endl;

    Test rtest(std::move(str)); // move str into rtest
    cout << "str after move: '" << str << "'" << endl; // str is in a valid but unspecified state
    return 0;

}

// relative costs
// pass by const reference
   // lvalue object passed - 1 copy
   // rvalue object passed - 1 copy

// pass by value/pass by move
   // lvalue object passed - 2 copies
   // rvalue object passed - 1 move + 1 copy

// pass by value then move
    // lvalue object passed -  1 copy + 1 move
    // rvalue object passed - 2 moves

// pass by rvalue reference
   // lvalue object passed - not allowed
   // rvalue object passed - 1 move