#include <iostream>
#include <memory>

using namespace std;

struct Son;

struct Father {
    ~Father() { cout << "Father destroyed\n"; }
    void setSon(const shared_ptr<Son> &s) {
        mySon = s;
    }
    shared_ptr<Son> mySon;  
};

struct Son {
    Son(shared_ptr<Father>& m) : myFather(m) {}
    ~Son() { cout << "Son destroyed\n"; }
    weak_ptr<const Father> myFather;  // strong reference to Father
};

int main() {
    {
        cout << "Creating Father and Son with strong references (cycle)...\n";
        auto father = make_shared<Father>();
        auto son = make_shared<Son>(father);
        father->setSon(son);
        cout << "Exiting scope...\n";
    } // Both Father and Son are not destroyed due to cyclic reference

    cout << "End of program.\n";
    return 0;
}