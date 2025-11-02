
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
void func(T&& param) {

    // Forwarding reference: can bind to both l-values and r-values
    cout << "func called with argument of type: " << typeid(param).name() << endl;
}

int main() {
    Test t;
    Test& rt{t}; // rt is an l-value reference to Test

    // T is Test& and x is T&& => Test&
    func(t); // compiler instantiates func(Test& param)

    // T is Test& and x is T&& => Test&
    func(rt); // compiler instantiates func(Test& param)

    // T is Test and x is T&& => Test&&
    func(std::move(t)); // compiler instantiates func(Test&& param)
}