#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class bad_student_grade : public std::out_of_range
{
public:
    // Default constructor
    bad_student_grade() : std::out_of_range("Invalid grad: please try again") {}

    // We need constructors which take a string, for consistency with std::exception
    bad_student_grade(const string &msg) : std::out_of_range(msg) {}
    bad_student_grade(const char *msg) : std::out_of_range(msg) {}

    // These default operators are good enough as we do not have any data members
    bad_student_grade(const bad_student_grade &) = default;
    bad_student_grade &operator=(const bad_student_grade &) = default;

    // finally, we can override the virtual what() member function
    // const char* what() const noexcept override { return "Invalid grad: please try again"; }
};