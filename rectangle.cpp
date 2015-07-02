
#include "rectangle.h"

Rectangle::Rectangle(): upperLeft(Point(Fraction(0, 1),
  Fraction(0, 1))), lowerRight(Point(Fraction(0, 1), Fraction(0, 1))) {
}

Rectangle::Rectangle(const Point& pt1, const Point& pt2) :
  upperLeft(pt1), lowerRight(pt2) {
}

Rectangle::Rectangle(const Rectangle& rec) :
  upperLeft(rec.upperLeft), lowerRight(rec.lowerRight) {
}

Rectangle::~Rectangle() {
}

Fraction Rectangle::computeArea() {
	Fraction width, length;

	width = lowerRight.getX() - upperLeft.getX();
	width = (width < 0) ? width*-1 : width;

	length = upperLeft.getY() - lowerRight.getY();
	length = (length < 0) ? length *-1 : length;

	return (width * length);
}

Fraction Rectangle::computeVolume() {
  return Fraction();
}

void Rectangle::print() const {
  cout << "\n      Upper Left: ";
  cout << lowerRight;
  cout << "\n      Lower Right: ";;
  cout << upperLeft << endl;
}

ostream& operator<<(ostream& os, const Rectangle& rec) {
  rec.print();
  return os;
}

istream& operator>>(istream& in, Rectangle& rec) {
  Point p1, p2;
  Fraction x, y;
  cout << "\n      Upper Left: ";
  cin >> p1;

  cout << "\n      Lower Right: ";
  do {
    cout << "\n        X-coordinate: ";
    cin >> x;
    if (x < p1.getX()) {
      cout << "\n        Invalid input!" << endl;
      cout << "\n        It has to be greater than the X-coordinate of Upper Left Point!" << endl;
      cout << "\n        X-coordinate: ";
      cin >> x;
    }
  } while (x < p1.getX());

  do {
    cout << "\n        Y-coordinate: ";
    cin >> y;
    if (y > p1.getY()) {
      cout << "\n        Invalid input" << endl;
      cout << "\n        It has to be smaller than the Y-coordinate of Upper Left Point!" << endl;
      cout << "\n        Y-coordinate: ";
      cin >> y;
    }
  } while (y > p1.getY());

  p2 = Point(x, y);
  rec = Rectangle(p1, p2);
  return in;
}

Point Rectangle::getUpperLeft() const {
  return upperLeft;
}

Point Rectangle::getLowerRight() const {
  return lowerRight;
}