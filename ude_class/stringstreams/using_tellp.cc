#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ostringstream output; // open an output stringstream
    string data{"It is time to say "};
    output << data; // write some data to the stream

    auto marker = output.tellp(); // save current file position marker
    cout << data.size() << " character written to stream \n";
    cout << "Stream marker is " << marker << " bytes into the stream \n";

    output << "hello "; // write some more data to the stream
    cout << "Stream marker is now " << output.tellp() << " bytes into the stream \n";

    cout << output.str() << endl;

    if (marker != -1)         // we have change the marker
        output.seekp(marker); // move the marker

    output << "goodnight"; // write some more data.

    cout << output.str() << endl;

    return 0;
}
