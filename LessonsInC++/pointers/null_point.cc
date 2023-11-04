#include <iostream>
#include <cstddef>
using namespace std;

int count_x(char *p, char x)
{

    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p != 0; ++p)
        if (*p == x)
            ++count;
    cout << count << endl;
    return count;
}

int main()
{
    char p[] = {'A', 'B', 'C'};
    char s = 'A';

    count_x(p, s);
}