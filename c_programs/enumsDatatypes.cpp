#include <iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

enum dept
{
    cs = 1,
    ece,
    it,
    civil
};

typedef int marks;
typedef int rollno;

int main()
{
    dept d;
    if (d == cs)
    {
        return true;
    };
    return 0;
}