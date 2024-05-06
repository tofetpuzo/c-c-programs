#include <iostream>

using namespace std;

class String {
private:
  char *data;
  int size;

public:
  String(int size)
      : size(size), data(new char[size]){}; // Initialize data with new
                                            // char[size] and size with size

  String(const String &arg) // Copy constructor
      : size(arg.size) {
    cout << "Copy constructor called" << endl;
    data = new char[size];           // allocate memory for data
    for (int i = 0; i < size; i++) { // populate data with arg.data
      data[i] = arg.data[i];
    }
  }

  //   assignment operatior
  String &operator=(const String &arg) {
    cout << "Assignment operator called" << endl;
    String temp(arg);  // create a copy of arg
    swap(*this, temp); // swap the data members with temp
    return *this;      // return the object
  }                    // temp will be destroyed here

  int length() { return size; }
  // destructor
  ~String() {
    cout << "Destructor called: " << static_cast<void *>(data) << endl;
    delete[] data; // deallocate memory
  }

  //   declare overloaded swap() as a friend of this class
  friend void swap(String &first, String &second) noexcept;

  void print() {
    cout << "String with size = " << size;
    cout << ", data address " << static_cast<void *>(data) << endl;
  }
};

inline void swap(String &first, String &second) noexcept {
  cout << "Swap called" << endl;
  swap(first.size, second.size);
  swap(first.data, second.data);
}

int main() {
  String a{10};
  cout << "a: ";
  a.print();

  String b{20};
  cout << "b: ";
  b.print();

  cout << endl;
  cout << " copy construction of c from b\n";
  String c{b};

  cout << "b: ";
  b.print();

  cout << "c: ";
  c.print();
  cout << endl;

  cout << "assignment of c from a\n";
  a = c;

  cout << "a: ";
  a.print();

  cout << "c: ";
  c.print();
  cout << endl;

  cout << "exiting main....\n";

  return 0;
}