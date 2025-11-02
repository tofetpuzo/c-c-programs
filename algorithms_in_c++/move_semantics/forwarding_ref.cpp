#include <iostream>

using namespace std;

void func(int& val) {
    cout << "func called with argument int& " << val << endl;
}

int main(){
    int i{42};
    // int & & refref = i; // error: cannot have reference to reference

    using int_ref = int&; // or typedef int& int_ref;
    int_ref ref = i; // ref is a reference to int

    int_ref& j{i}; // i is a reference to int
    int_ref& rj{j}; // rj is a reference to (reference to int)

    func(rj); // OK: rj is an l-value of type int&

 }

//  reference collasping rules 
// rvalue reference can also appear in nested references
//  The result is an rvalue reference only if they are bpth rvalue references

//  using lval_ref = int&;
//  using rval_ref = int&&;

//  lval_ref &  --> int&
//  lval_ref && --> int&
//  rval_ref &  --> int&
//  rval_ref && --> int&&


// && Template Argument Parameters
// template<typename T>
// void func(T&& param); // param is a forwarding reference
//  it can be bound to both l-values or r-values

// when the complier instantiates this function, how does it deduce the argument type T?
// if an l-value is passed, T is deduced to be an l-value reference type
// if an r-value is passed, T is deduced to be a non-reference type

#include <iostream>

using namespace std;

class Test{};

template<typename T>
void func_forward(T&& param) {
    // Forwarding reference: can bind to both l-values and r-values
    cout << "func called with argument of type: " << typeid(param).name() << endl;
}

int main() {
    Test t;
    Test& rt{t}; // rt is an l-value reference to Test

    // T is Test& and x is T&& => Test&
    func_forward(t); // compiler instantiates func(Test& param)

    // T is Test& and x is T&& => Test&
    func_forward(rt); // compiler instantiates func(Test& param)

    // T is Test and x is T&& => Test&&
    func_forward(std::move(t)); // compiler instantiates func(Test&& param)
}