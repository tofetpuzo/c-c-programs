// Dynamic Binding Requirement:
//  Two conditions must be satisfied for dynamic binding to occur:
//  1. The function must be virtual.
//  2. The function must be called through a pointer or reference to the base
//  class.

#include <iostream>
#include <string>

class Shape {
public:
  virtual void draw() const {
    std::cout << "Drawing a generic shape" << std::endl;
  }
};

class Circle : public Shape {
public:
  void draw() const { std::cout << "Drawing a circle" << std::endl; }
};

class Triangle : public Shape {
public:
  void draw() const { std::cout << "Drawing a triangle" << std::endl; }
};

void draw_shape(const Shape &s) { s.draw(); }

int main() {
  Shape s;
  Circle c;
  Triangle t;

  draw_shape(s);
  draw_shape(c);
  draw_shape(t);

  return 0;
}