#include <fstream>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ifstream ifile;

  ifile.exceptions(ifstream::failbit | ifstream::badbit);
  try {
    ifile.open("test.txt");
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }
}