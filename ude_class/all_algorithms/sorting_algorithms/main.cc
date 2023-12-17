// command to compile: g++ -arch arm64 -o output_file main.cc student.cc
// student.h

#include <algorithm>
#include <iostream>
#include <vector>

#include "student.h"

using namespace std;

int main() {
  student student1("John Smith", 561234);
  student student2("Jane Doe", 561235);
  student student3("John Doe", 561236);
  student student4("Jane Smith", 231237);

  vector<student> students = {student1, student2, student3, student4};

  cout << "Vector before sorting: " << endl;

  for (auto s : students)
    s.print();

  // The john smiths students maybe in either order
  stable_sort(begin(students), end(students));

  cout << "Vector after sorting: " << endl;
  for (auto s : students)
    s.print();
}