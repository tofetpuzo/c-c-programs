#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{

    cout << "Please enter a number: " << endl;

    // iterator that will read ints from cin
    
    while (cin.ignore())
    {
        /* code */
        // read an int from the stream
        istream_iterator<int> ii(cin);
        int x = *ii;
        cout << "You entered " << x << endl;
    }

    return 0;
}
