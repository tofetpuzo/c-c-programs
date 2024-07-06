#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Shape
{
public:
    virtual void draw() const = 0; // pure virtual function
    virtual void rotate() const = 0;
};

class Circle : public Shape
{
public:
    void draw() const override { cout << "Drawing a circle" << endl; }
    void rotate() const override { cout << "Rotating a circle" << endl; }
};

class Triangle : public Shape
{
public:
    void draw() const override { cout << "Drawing a triangle" << endl; }
    void rotate() const override { cout << "Rotating a triangle" << endl; }
};

int main()
{
    vector<unique_ptr<Shape>> shapes; // vector of unique pointers to Shape objects

    // create a pointer to a child class of shape and append it to the vector
    shapes.push_back(make_unique<Circle>());
    shapes.push_back(make_unique<Triangle>());

    // iterate through the vector and call the draw function
    for (auto &s : shapes)
    {
        s->draw();
        s->rotate();
    }
}