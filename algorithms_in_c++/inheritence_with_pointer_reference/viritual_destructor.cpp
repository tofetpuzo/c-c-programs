#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
  // virtual void draw() = 0;
  // virtual void rotate() = 0;
  // virtual ~Shape(){}; // virtual destructor
  void draw() { cout << "Drawing a shape" << endl; };
  virtual ~Shape() { cout << "Shape destructor" << endl; }
};
class Circle : public Shape {
public:
  void draw() const override { cout << "Drawing a circle" << endl; }
  ~Circle() { cout << "Circle destructor" << endl; }
};

int main() {
  vector<Shape *> shapes; // vector of pointers to Shape objects

  // create a pointer to a child class of shape and append it to the vector
  shapes.push_back(new Circle());
  shapes.push_back(new Circle());
  shapes.push_back(new Circle());

  // iterate through the vector and call the draw function
  for (auto s : shapes) {
    // s->draw();
    static_cast<Circle *>(s)->draw();
  }

  // free memory
  for (auto s : shapes) {
    delete s;
  }
}