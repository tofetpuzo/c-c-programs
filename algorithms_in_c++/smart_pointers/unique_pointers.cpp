#include <memory>
#include <iostream>

using namespace std;    

int main(){
    // In c++11, we have to provide the pointer by calling new() explicitly

    // allocate a single int with value 42
    unique_ptr<int> p1{new int(42)};

    // allocate an array of 6 ints
    unique_ptr<int[]> p2{new int[6]};


    // usually better to use std::array or std::vector
    // std::array<int, 6> arr1;
    // std::vector<int> arr2(6);

    // c++14 has make_unique, which calls new() internally
    auto p3 = make_unique<int>(42);          // single int

    auto p4 = make_unique<int[]>(6);         // array of 6 ints


}