#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
// #include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ifstream infile("data.txt");
    if (!infile)
    {
        /* code */
        cout << "Could not open data.txt";
        return -1;
    }

    string line;
    vector<int> numbers;

    while (getline(infile, line))
    {
        /* Validation etc */
        istringstream is(line);
        int num;
        while (is >> num)
        {
            /* code */
            numbers.push_back(num);
        }
    }
    double sum{0.0};
    for (auto &&n : numbers)
    {
        cout << n << endl;
        sum+=n;
    }
    cout << "Average is " << sum/numbers.size() << endl;    

    return 0;
}
