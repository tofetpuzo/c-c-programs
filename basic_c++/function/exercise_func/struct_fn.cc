#include <iostream>
#include <string>
using namespace std;

// assignment
// declare a student structure
// input name,age,roll_no, marks for 3 subject
// outpuyt name,roll_no and avg_marks
struct student_details
{
    /* data */
    char name[50];
    int age;
    int row_number;
    int subject1;
    int subject2;
    int subject3;
};

int main()
{
    struct student_details student;
    double sum;

    cout << "Enter your name is: ";
    cin.getline(student.name, sizeof(student.name));

    cout << "Enter your row number is: ";
    cin >> student.row_number;

    cout << "Enter your marks for english: ";
    cin >> student.subject1;

    cout << "Enter your marks for maths: ";
    cin >> student.subject2;

    cout << "Enter your marks for chemistry: ";
    cin >> student.subject3;

    sum = (student.subject1 + student.subject2 + student.subject3) / 3;

    cout << endl;

    cout << "Name:" << student.name << endl;
    cout << "row_number : " << student.row_number << endl;
    cout << "The average mark is: " << sum << endl;
    return 0;
}
