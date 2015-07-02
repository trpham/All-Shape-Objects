/**
 * Program name:  rectangle.h
 * Discussion:    Rectangle class
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "point.h"

class Rectangle: public Shape {
public:
  Rectangle();
  Rectangle(const Point&, const Point&);
  Rectangle(const Rectangle&);

  ~Rectangle();

  void print() const;

  Point getUpperLeft() const;
  Point getLowerRight() const;

  Fraction computeArea();
  Fraction computeVolume();

  friend ostream& operator<<(ostream&, const Rectangle&);
  friend istream& operator>>(istream&, Rectangle&);

private:
  Point upperLeft;
  Point lowerRight;
};

#endif