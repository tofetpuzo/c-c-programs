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
    data = new char[size];           // allocate memory for data
    for (int i = 0; i < size; i++) { // populate data with arg.data
      data[i] = arg.data[i];
    }
  }

  //   assignment operatior
  String &operator=(const String &arg) {
    cout << "Assignment operator called" << endl;
    if (&arg != this) { // check for self assignment

      char *ndata = new char[arg.size]; // allocate memory for data
      delete[] data;                    // deallocate memory
      data = ndata;                     // assign to the data member
      size = arg.size;                  // assign to the size member
      for (int i = 0; i < size; ++i) {  // populate data with arg.data
        data[i] = arg.data[i];
      }
    }
    return *this; // return the object
  }

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
  String str1(10), str2(20);
  cout << "Before swap" << endl;
  cout << "str1: ";
  str1.print();

  cout << "str2: ";
  str2.print();

  swap(str1, str2);
  cout << endl;

  cout << "After swap" << endl;
  cout << "str1: ";
  str1.print();

  cout << "str2: ";
  str2.print();

  cout << "End of main" << endl;

  return 0;
}