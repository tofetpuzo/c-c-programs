#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << stoi("42"s) << endl;

    string str{"   314 159"};
    size_t n_processed;
    auto i = stoi(str, &n_processed);

    if(n_processed < str.size()){
        cout << "None-numeric character at index " << n_processed << endl;
    }
    cout << "Result of the conversion: " << i << endl; //display 314
    // stoi("abcdef"s);

    auto x = stoi("2a", nullptr , 16);
    cout << "Result of the conversion: " << x << endl; //display 314

    return 0;
}
