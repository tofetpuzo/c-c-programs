// Move Only classes and RAII

// In the previous example, we have seen how to implement move semantics for a
// class that has a resource. In this example, we will see how to implement a
// class that can only be moved and not copied. This is useful when we have a
// class that manages a resource that cannot be copied. For example, a class
// that manages a file handle or a class that manages a network connection.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class File {};

class NetworkConnection {
private:
  int socket{0};
  File file;

public:
  NetworkConnection() = default;

  NetworkConnection(const NetworkConnection &) = delete;
  NetworkConnection &operator=(const NetworkConnection &) = delete;

  // Implement move constructor
  NetworkConnection(NetworkConnection &&arg) noexcept
      : socket(arg.socket), file(std::move(arg.file)) {
    cout << "Move constructor called" << endl;
  }

  // Implement move assignment operator
  NetworkConnection &operator=(NetworkConnection &&arg) noexcept {
    cout << "Move assignment operator called" << endl;
    if (&arg != this) {
      socket = arg.socket;
      file = std::move(arg.file);
    }
    return *this;
  }
};

int main() {
  NetworkConnection conn1; // call default constructor
  //   cout << "Copying: ";
  //   NetworkConnection conn2 = conn1; // copy constructor
  cout << "\n Moving temporary: ";
  NetworkConnection conn2 =
      NetworkConnection(); // call move constructor by passing temporary object
  cout << "\n Moving: ";
  NetworkConnection conn3(
      std::move(conn1)); // call move constructor by passing rvalue object

  cout << endl;
  //  cout << "\nAssigning:"
  //   NetworkConnection conn3 = conn1; // call copy assignment operator
  NetworkConnection conn4;
  cout << "\nAssigning from temporary: ";
  conn3 = NetworkConnection(); // call move assignment operator by passing
                               // temporary object

  cout << endl;
  vector<string> vec(5);

  cout << "Capture by reference " << endl;
  [&vec]() { cout << "Size in lambda: " << vec.size() << endl; }();
  cout << "After calling lambda, size in main = " << vec.size() << endl;

  cout << "Capture by move " << endl;
  [vec = std::move(vec)]() {
    cout << "Size in lambda: " << vec.size() << endl;
  }();
  cout << "After calling lambda, size in main=  " << vec.size() << endl;
}