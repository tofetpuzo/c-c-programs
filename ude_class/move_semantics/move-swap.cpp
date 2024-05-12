#include <iostream>

using namespace std;

class String {
private:
  int size;
  char *data;

public:
  String(int size)
      : size(size), data(new char[size]){}; // Initialize data with new
                                            // char[size] and size with size

  String(const String &arg) // Copy constructor
      : size(arg.size) {
    cout << "Copy constructor called" << endl;
    data = new char[size];           // allocate memory for data
    for (int i = 0; i < size; ++i) { // populate data with arg.data
      data[i] = arg.data[i];
    }
  }

  //   assignment operatior
  String &operator=(const String &arg) {
    cout << "Assignment operator called" << endl;
    if (&arg != this) {
      cout << "Reallocating memory\n";
      delete[] data;
      data = new char[arg.size];

      size = arg.size;                 // update size
      for (int i = 0; i < size; ++i) { // populate data with arg.data
        data[i] = arg.data[i];
      }
      return *this;
    } // temp will be destroyed here
  }
  //  move assignment
  String(String &&arg) noexcept {
    cout << "Move constructor called" << endl;
    size = arg.size;
    data = arg.data;
    arg.data = nullptr;
    arg.size = 0;
  }

  // move assignment operator
  String &operator=(String &&arg) noexcept {
    cout << "Move Assignment operator called" << endl;
    String temp{std::move(arg)};
    swap(*this, temp);
    return *this;
  }
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

//   inline
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

  cout << "Copying:  ";
  String c{b};
  cout << "b: ";
  a.print();
  cout << "c: ";
  b.print();

  cout << "Moving:  ";
  String d{std::move(b)};

  cout << "b: ";
  b.print();
  cout << "d: ";
  d.print();

  cout << "Moving Assignment:  ";
  a = std::move(d);
  cout << "a: ";
  a.print();
  cout << "d: ";
  d.print();
}
