#include <iostream>

using namespace std;

class Vehicle
{
public:
    void accelerate()
    {
        cout << "Vehicle is accelerating" << endl;
    }
};
class Aeroplane : public Vehicle
{
public:
    using Vehicle::accelerate; 
    void accelerate(int height)
    {
        cout << "Aeroplane is accelerating: " << height;
    }
};

int main()
{
    Aeroplane a;
    a.accelerate(1000);
    cout << endl;
    a.accelerate();
    cout << endl;
    return 0;
}