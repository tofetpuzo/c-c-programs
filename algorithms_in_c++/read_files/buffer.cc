#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ofstream ofile("text_out.txt");
  if (!ofile) {
    cerr << "Error opening file" << endl;
    return -1;
  }
  for (int i = 0; i < 1'000'000; i++) {
    cout << i << "\n" << flush;
    ofile << i << "\n" << flush;
    if (i == 66666) {
      terminate();
    }
  }
  ofile.close();
}