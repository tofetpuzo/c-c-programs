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
    void accelerate(int height)
    {
        cout << "Aeroplane is accelerating: " << height << endl;
    }
};

int main()
{
    Aeroplane a;
    a.accelerate(1000);
    cout << endl;
    return 0;
}