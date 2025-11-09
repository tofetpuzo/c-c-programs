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

int main() {

    // vector<Shape*> shapes;
    // shapes.push_back(new Circle());
    // shapes.push_back(new Square());
    // shapes.push_back(new Triangle());

    // for (const auto& shape : shapes) {
    //     shape->draw();
    // }

    // // Clean up
    // for (auto& shape : shapes) { // memmory leak if the pointers are not deleted
    //     delete shape;
    // }

    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Circle>());
    shapes.push_back(make_unique<Square>());
    shapes.push_back(make_unique<Triangle>());

    for (const auto& shape : shapes) {
        shape->draw();
    }

    return 0;
}