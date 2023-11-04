#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>


using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ostringstream ostr;
    string text;

    cout << "Please enter a word \n";
    cin >> text;
    ostr<< setw(16) << text;
    cout << "Please enter another word\n";
    cin >> text;
    ostr << setw(12) << text;

    // call str() to access the output string
    cout << ostr.str() << endl;

    return 0;
}
