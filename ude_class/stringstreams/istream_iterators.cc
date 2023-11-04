#include <iostream>
#include <vector>
#include <iterator>
#include <csignal>
#include <cstdlib> // for exit()

using namespace std;

bool stop = false;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received" << endl;
    stop = true;
}

int main(int argc, char const *argv[])
{
    signal(SIGINT, signalHandler);

    istream_iterator<string> iis(cin);
    istream_iterator<string> eof;

    vector<string> vs;
    while (iis != eof && !stop)
    {
        vs.push_back(*iis);
        ++iis;
    }

    // Print the contents of the vector
    for (auto v : vs)
    {
        cout << v << endl;
    }

    return 0;
}
