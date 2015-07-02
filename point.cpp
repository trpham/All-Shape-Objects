
#include "point.h"

Point::Point(): x(Fraction(0, 1)), y(Fraction(0, 1)) {
}

Point::Point(const Fraction& fr1, 
	const Fraction& fr2): x(fr1), y(fr2) {
}

Point::Point(const Point& pt): x(pt.x), y(pt.y) {
}

Point::~Point() {
}

void Point::setX(Fraction& fr) {
  x = fr;
}

void Point::setY(Fraction& fr) {
  y = fr;
}

Fraction Point::getX() {
  return x;
}

Fraction Point::getY() {
  return y;
}

void Point::moveBy(Fraction& fr1, Fraction& fr2) {
  x = x + fr1;
  y = y + fr2;
}

void Point::moveBy(int a) {
  x = x + a;
  y = y + a;
}

void Point::flipByX() {
  y = y * -1;
}

void Point::flipByY() {
  x = x * -1;
}

void Point::flipThroughOrigin() {
  x = x * -1;
  y = y * -1;
}

void Point::print() const {
  cout << "(" << x << ", " << y << ")";
}

ostream& operator<<(ostream& os, const Point& p) {
  p.print();
  return os;
}

istream& operator>>(istream& is, Point& p) {
  Fraction x;
  Fraction y;
  cout << "\n        X-coordinate: ";
  cin >> x;
  cout << "\n        Y-coordinate: ";
  cin >> y;
  p = Point(x, y);
  return is;
}