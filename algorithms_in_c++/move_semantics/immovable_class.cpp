// immovable_class.cpp
#include <iostream>

using namespace std;
class Test{
public:
    // default constructor
    Test()  = default;

    // the copy operators are declared as deleted
    Test(cons Test&other) = delete;

    // copy assignment operator is declared as deleted
    Test& operator=(const Test& other) = delete;
}