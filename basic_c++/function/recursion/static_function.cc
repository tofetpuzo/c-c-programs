#include <iostream>
using namespace std;
// memory allocated to variable inside the function
// when the function gets called and memory is destroyed when funcion is end
void demo()
{
    static int count = 1;
    count++;
    cout << count << endl; // 2,3....6
}
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        demo();
    }
}