#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
int main() {
  ofstream ofile("text_out.txt");
  if (ofile) {
    vector<string> names{"John", "Mary", "Peter", "Jane", "Thomas"};
    for (auto name : names) {
      ofile << name << endl;
    }
    ofile.close();
  }
}