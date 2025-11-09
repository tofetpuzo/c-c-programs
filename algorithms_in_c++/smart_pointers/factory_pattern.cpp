#include <memory>
#include <iostream>
#include <vector>

using namespace std;

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() = default;     // Virtual destructor
};

class Circle : public Shape {
public:
    void draw() const  {
        cout << "Drawing a circle\n";
    }
};

class Square : public Shape {
public:
    void draw() const {
        cout << "Drawing a square\n";
    }
};

class Triangle : public Shape {
public:
    void draw() const {
        cout << "Drawing a triangle\n";
    }
};

// Factory function to create shapes
Shape* createShape(int sides) {
    if (sides == 1) {
        return new Circle();
    } else if (sides == 4) {
        return new Square();
    } else if (sides == 3) {
        return new Triangle();
    } else {
        cout << "Unknown shape with " << sides << " sides.\n";  
        return nullptr;
    }
}
// Factory function to create shapes using unique_ptr
unique_ptr<Shape> createShapeUPtr(int sides) {
    if (sides == 1) {
        return make_unique<Circle>();
    } else if (sides == 4) {
        return make_unique<Square>();
    } else if (sides == 3) {
        return make_unique<Triangle>();
    } else {
        cout << "Unknown shape with " << sides << " sides.\n";  
        return nullptr;
    }
}

int main(){
    // the returned pointer will be copied into a variable of type unique_ptr<Shape>
    Shape *pshape = createShape(3);

    if (pshape)
    {
       pshape -> draw();
    }
    delete pshape;

    // the returned unique_ptr will be moved into a variable of type unique_ptr<Shape>
    auto p1shape{createShapeUPtr(3)};

    if (p1shape)
       p1shape -> draw();
    
}