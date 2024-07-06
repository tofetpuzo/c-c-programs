#include <iostream>
#include <string>

class Shape {
public:
  virtual void draw() const;
};

class Circle : public Shape {
public:
  void draw() const override final;
};

class DeluxeCircle : public Circle {
public:
  void draw() const override;
};