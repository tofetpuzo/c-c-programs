#include <iostream>

using namespace std;

class Test{};

void g(Test& param) {
    cout << "modified version of g called with l-value reference" << endl;
}

void g(const Test& param) {
    cout << "immutable version of g called with const l-value reference" << endl;
}

void g(Test&& param) {
    cout << "modified version of g called with r-value reference" << endl;
}

template<class T>
void f(T&& param) {
    // Forwarding reference: can bind to both l-values and r-values
    g(std::forward<T>(param)); // always treats param as an r-value
}

int main() {
    Test t;
    const Test cx;

    cout << "Calling f() with l-value:\n";
    f(t);
    cout << "\nCalling f() with const l-value:\n";
    f(cx);
    cout << "\nCalling f() with r-value:\n";
    f(std::move(t));
    return 0;
}