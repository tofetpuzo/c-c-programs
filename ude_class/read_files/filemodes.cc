#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ofstream ofile;
  //   ofile.open("text_out.txt", ios::app);
  //   ofile.open("text_out.txt", fstream::app);
  ofile.open("text_out.txt", fstream::in | fstream::out);
  if (!ofile) {
    cerr << "Error opening file" << endl;
    return -1;
  }
  ofile << " we are good!" << endl;

  ofile.close();
}