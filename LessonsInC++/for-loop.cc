// =====
// for loop
#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 1;
    for (; i <= 10;)
    {
        cout << "i=" << i << endl;
        if (i == 5)
            break;
        i++;
    }
}