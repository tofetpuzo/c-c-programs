#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ostream_iterator<int> oi(cout , "\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        *oi = i;
        ++oi;
    }
    
    return 0;
}
