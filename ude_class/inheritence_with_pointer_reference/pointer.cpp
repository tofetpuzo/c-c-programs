#include <iostream>
using namespace std;

class Shape
{
public:
    // virtual void draw() = 0;
    // virtual void rotate() = 0;
    // virtual ~Shape(){}; // virtual destructor
    void draw()
    {
        cout << "Drawing a shape" << endl;
    };
};
class Circle : public Shape
{
public:
    void draw() { cout << "Drawing a circle" << endl; }
    void rotate() { cout << "Rotating a circle" << endl; }
    void area() { cout << "Calculating area of a circle" << endl; }
};
void draw_shape(Shape &pshape)
{
    pshape.draw();
}

void draW_shape(Circle &pcircle)
{
    pcircle.draw();
}

int main()
{
    Circle circle;          // DERIVED CLASS OBJECT
    Shape &rshape = circle; // binds reference to base class, to a circle object
    // rshape->draw();

    draW_shape(circle); // calls derived class function
    draw_shape(rshape); // calls derived class function
    // Shape sape;
    // Circle *c1 = &shape; // Error: cannot convert ‘Shape*’ to ‘Circle*’ in initialization
    // calls derived class function
    return 0;
}
