#include "Date.h"
#include <iostream>

int main() {
    // Date_impl date_impl(10, 7, 2024); // cannot access Date_impl directly
    Date date(15, 8, 2024);
    date.print();
    std::cout << "Date created.\n";
    date.set_date(16);
    date.print();
    std::cout << "Date updated.\n";
    return 0;
}

// Prons and Cons of Pimpl with Smart Pointers
// Pros:
//1. clients do not need to include body.h
//2. clients  do not need to modified if body_impl.h changes
//3. clients do not need to be recomplied if body_impl.h changes
//4. users do not need a new program executable if body_impl.h changes
//5. useful if implementation needs to be kept secret from clients

// Cons:
// requires an extra memory allocation for the body object
// member functions calls require a pointer dereference
// loading a shared library increases the program's startup time
// adds complexity to the codebase