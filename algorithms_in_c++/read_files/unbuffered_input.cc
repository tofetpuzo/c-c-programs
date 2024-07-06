#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  const int filesize{10};    // the size of the memory buffer
  char filebuffer[filesize]; // the memory buffer

  ifstream ifile("text_out.txt");
  if (!ifile) {
    cerr << "Error opening file" << endl;
    return -1;
  }

  // read the first 10 characters
  ifile.read(filebuffer,
             filesize); // fetch data from the file into the memory bufffer
  auto nread = ifile.gcount(); // get the number of characters read
  cout << "number of characters read: " << nread << endl;
  ifile.close();

  cout << "file data: ";
  cout.write(filebuffer, filesize); // send the data from the memory buffer
  cout << endl;
}