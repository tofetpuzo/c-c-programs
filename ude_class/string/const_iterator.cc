#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string::const_iterator cit;
    string::const_reverse_iterator zit;
    string str {"helloworld"};
    /* code */
    for (cit = str.begin(); cit != str.end(); ++cit)
        cout<< *cit << ", ";
    
    cout << endl;
    for (zit = str.rbegin(); zit != str.rend(); ++zit)
        cout<< *zit << ", ";

    cout << endl;

    for (auto sit = str.cbegin(); sit != str.cend(); ++sit)
        cout<< *sit << ", ";

    cout << endl;

    for (auto vit = str.crbegin(); vit != str.crend(); vit++)
        cout<< *vit << ", ";
    
    return 0;
}
