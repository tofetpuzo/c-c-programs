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
    bad_student_grade(const bad_student_grade &other) = default;
    bad_student_grade &operator=(const bad_student_grade &other) = default;

    // finally, we can override the virtual what() member function
    // const char* what() const noexcept override { return "Invalid grad: please try again"; }
};

class StudentGrade
{
    int grade;

public:
    StudentGrade(int grade) : grade(grade)
    {
        if (grade < 0)
        {
            throw bad_student_grade("bad grade");
        }

        if (grade > 100)
        {
            throw bad_student_grade();
        }
    }
};

int main()
{
    int result;
    cout << "Enter student grade: ";
    cin >> result;
    try
    {
        StudentGrade student(result);
        cout << "Student grade is: " << result << endl;
    }
    catch (bad_student_grade &e)
    {
        cout << "Caught a bad student grade exception: " << e.what() << endl;
    }
    return 0;
}