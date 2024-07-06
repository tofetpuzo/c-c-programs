#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Shape
{
public:
    virtual void draw() const { cout << "Drawing a shape" << endl; }
};

class Circle : public Shape
{
public:
    void draw() const override { cout << "Drawing a circle" << endl; } // member function declared with 'override' does not override a base class member
};

// function taking a base class by value
// void draw_shape(Shape s)
// {
//     s.draw();
//     (&s)->draw();
// }

// voume draw_shape(Shape s) cannot declare parameter 's' to be of abstract type 'Shape'

// using dynamic binding
void draw_shape(const Shape &s)
{
    s.draw();
    (&s)->draw(); // use dynamic binding to call Circle::draw()
}

int main()
{
    Circle c;
    draw_shape(c);
}

// using dynamic binding
