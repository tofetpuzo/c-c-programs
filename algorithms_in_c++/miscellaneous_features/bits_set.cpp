#include <iostream>
#include <bitset>

using namespace std;

int main(){
    bitset<8> b1{"10101110"};          // all bits initialized to 0
    bitset<8> b2{0xae};               // binary literal (C++14)
    bitset<8> b3{0b1010'1110};       //  initialize from binary constant (C++14)

    cout << "Bitset b1: " << b1 << endl;
    cout << "b2 in decimal: " << b2.to_ulong() << endl;
    cout << "b2 as a string is: " << b2.to_string() << endl;
    cout << "b3 " << b3 << endl;

    cout << "b1 has " << b1.size() << " bits\n";

    // display all the bits in b1

    cout << "The bits of b1 are: ";
    for(size_t i = 0; i < b1.size(); ++i){
        cout << b1[i] << ", ";
    }
    cout << endl;

    // bit access with bound checking
    cout << "Trying access to bit 8 of b1 with bounds checking: \n";
    try{
        cout << "b1 bit" << 8 << " is " << b1.test(8) << endl;
    }   
    catch (std::exception& e){
        cout << "Caught Exception: " << e.what() << endl;
    }

    return 0;
}