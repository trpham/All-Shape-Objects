/**
 * Program name:  Point.h
 * Discussion:    Point class
 */

#ifndef POINT_H
#define POINT_H

#include "fraction.h"

class Point {
public:
  Point();
  Point(const Fraction&, const Fraction&);
  Point(const Point&);

  ~Point();

  void print() const;

  void setX(Fraction&);
  void setY(Fraction&);

  Fraction getX();
  Fraction getY();

  void moveBy(Fraction&, Fraction&);
  void moveBy(int);

  void flipByX();
  void flipByY();
  void flipThroughOrigin();

  friend ostream& operator<<(ostream&, const Point&);
  friend istream& operator>>(istream&, Point&);

private:
  Fraction x;
  Fraction y;
};

#endif