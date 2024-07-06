#include <iostream>
#include <string>
using namespace std;

bool equal_strings(const string &lhs, const string &rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    auto lit = cbegin(lhs);
    auto rit = cbegin(rhs);

    while (lit != cend(lhs) && rit != cend(rhs))
    {
        /* code */
        if (toupper(*lit) != toupper(*rit))
            return false;
        ++lit;
        ++rit;
    }
    return true;
}
int main(int argc, char const *argv[])
{
    /* code */
    string str1{"oNE"};
    string str3{"ONE"};

    cout << "there are " << boolalpha << equal_strings(str1, str3) << endl;
}
