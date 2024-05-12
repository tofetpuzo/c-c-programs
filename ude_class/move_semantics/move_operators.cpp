#include <iostream>

using namespace std;

class Grade {};

// class with move constructor
class Test {
private:
  int grade{0};
  Grade grade_obj;

public:
  Test() = default;

  // copy constructor
  Test(const Test &arg) : grade(arg.grade), grade_obj(arg.grade_obj) {
    cout << "Copy constructor called" << endl;
  }

  // move constructor
  Test(Test &&arg) noexcept : grade(arg.grade), grade_obj(move(arg.grade_obj)) {
    cout << "Move constructor called" << endl;
  };

  // copy assignment operator
  Test &operator=(const Test &arg) {
    cout << "copy Assignment operator called" << endl;
    if (this != &arg) {
      grade = arg.grade;
      grade_obj = arg.grade_obj;
    }
    return *this;
  }
  //   Move assignment operator
  Test &operator=(Test &&arg) noexcept {
    cout << "Move Assignment operator called" << endl;
    if (this != &arg) {
      grade = arg.grade;
      grade_obj = move(arg.grade_obj); // force move assignment to be called
    }
    return *this;
  }

  void print() { cout << "Grade: " << grade << endl; }
};

int main() {
  Test test;
  cout << "Copying:  ";

  Test test2 = test;

  cout << "\nMoving temporay:  ";
  Test test3 = Test(); // move constructor called

  cout << "\nMoving rvalue ref:  ";
  Test test4(std::move(test)); // move constructor called

  cout << endl;

  Test test5;
  cout << "\nAssigning:  ";
  test5 = test2; // copy assignment operator called

  Test test6;
  cout << "\nassigning from temporary:  ";
  test6 = Test(); // move assignment operator called
}