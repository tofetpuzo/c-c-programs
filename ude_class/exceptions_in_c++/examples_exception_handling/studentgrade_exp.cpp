#include <iostream>

using namespace std;

class StudentGrade {
  int grade;

public:
  StudentGrade(int grade) : grade(grade) {
    if (grade < 0 || grade > 100) {
      throw std::out_of_range("Invalid grade");
    }
  }
};

int main() {
  int result;
  cout << "Enter student's grade(beetween 0 and 100): ";
  cin >> result;
  try {
    StudentGrade student(result);
    cout << "Grade is valid" << endl;
  } catch (const std::out_of_range &e) {
    cout << "StudentGrade constructor threw an error: " << e.what() << '\n';
  }
}