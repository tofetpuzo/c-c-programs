#include <iostream>


#include <iostream>
#include <cmath>
using namespace std;

// Area of a circle.
int main()
{
    float radius;
    float area;

    cout << "Please provide the radius of the circle you wish to calculate? ";
    cin >> radius;
    area = 3.142 * pow(radius, 2);

    cout << "the area of this circle is " << area << endl;
}