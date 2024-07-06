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
  void draw() const override { std::cout << "Drawing a circle" << std::endl; }
  void draw(int radius) const override;
};

int main() {
  Circle c;
  c.draw();
  c.draw(42);

  return 0;
}
