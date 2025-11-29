#include <iostream>
#include <bitset>

using namespace std;

void demo_bit_operations(){
    bitset<8> b{"10101110"};
    cout << "Original b: " << b << endl;

    b.set();
    cout << "After b.set(): " << b << endl;

    b.reset(3);
    cout << "After b.reset(3): " << b << endl;

    b.flip(0);
    cout << "After b.flip(0): " << b << endl;
}

int main(){
    bitset<8> b1{"10101110"}; // bitset with value 174
    bitset<8> b2{0b010'1110}; // bitset with value 42


    cout << "b1 is: " << b1 << endl;
    cout << "~b1 is "<< ~b1 << endl;
    cout << "b2 is: " << b2 << endl;

    cout << "b1 & b2 is: " << (b1 & b2) << endl;
    cout << "b1 | b2 is: " << (b1 | b2) << endl;
    cout << "b1 ^ b2 is: " << (b1 ^ b2) << endl;

    cout << "b1 << 4 is: " << (b1 << 2) << endl;
    cout << "b1 >> 2 is: " << (b1 >> 2) << endl;

    demo_bit_operations();

    return 0;
}

// Bit operations
// set() b.set() // set all bits to true;
// b.set(0) // set bit at position 0 to true
// b.set(0,false) // set bit at position 0 to false

// reset() b.reset() // set all bits to false
// b.reset(0) // set bit at position 0 to false

// flip() b.flip() // invert all bits
// b.flip(0) // invert bit at position 0


// bit checks
// b.all() // true if all bits are true
// b.any() // true if any bit is true
// b.none() // true if all bits are false
// b.count() // number of bits set to true

