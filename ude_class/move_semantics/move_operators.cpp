#include <iostream>

using namespace std;

class Grade
{
};

// class with move constructor
class Test
{
private:
    int grade{0};
    Grade grade_obj;

public:
    Test() = default;
    Test(int grade) : grade(grade) {}
    Test(const Test &other) = default;
    Test &operator=(const Test &other) = default;
    Test(Test &&other) noexcept
    {
        cout << "Move constructor" << endl;
        grade = other.grade;
        other.grade = 0;
    }
    Test &operator=(Test &&other) noexcept
    {
        cout << "Move assignment" << endl;
        grade = other.grade;
        other.grade = 0;
        return *this;
    }
    void print() const
    {
        cout << grade << endl;
    }
};

