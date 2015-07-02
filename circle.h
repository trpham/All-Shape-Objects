/**
 * Program name:  Circle.h
 * Discussion:    Circle Class
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "rectangle.h"

class Circle: public Shape {
public:
  Circle();
  Circle(Circle&);
  Circle(Point&, Fraction&);
  ~Circle();

  Fraction computeArea();
  Fraction computeVolume();

  void print() const;

  friend ostream& operator<<(ostream&, const Circle&);
  friend istream& operator>>(istream&, Circle&);

private:
  Point center;
  Fraction radius;
};

#endif