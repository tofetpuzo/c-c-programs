#include <iostream>
#include <memory>

using namespace std;

// weak pointer application
// cache implementation
// data stored in shared pointer objects
// cache holds weak_pointer to data
// use lock() to retrieve data
// original data returned if not expired
// otherwise, need to fetch data again


int main() {
    // Create a shared pointer
    auto ptr{make_shared<int>(42)};
    cout << "Shared Pointer Value: " << *ptr << ", Use Count: " << ptr.use_count() << endl;

    // Create a weak_pointer alias to pointer
    weak_ptr<int> wptr = ptr;

    // relaess ptr's shared memory 
    ptr = nullptr;

    // wptr is an alias to ptr - is it still valid?
    shared_ptr<int> sptr = wptr.lock();
    // if (sptr) {
    //     cout << "Weak Pointer Value: " << *sptr << ", Use Count: " << sptr.use_count() << endl;
    // } else {
    //     cout << "Weak Pointer is expired." << endl; 
    // }
    
    try {
        // Attempt to access the value directly (will throw an exception)
        shared_ptr<int>sptr{wptr};
        cout << "Weak Pointer Direct Access Value: " << *wptr.lock() << endl;
    } catch (exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

}