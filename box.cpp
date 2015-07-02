/**
 * Program name:  box.h
 * Discussion:    Box Class Implementation
 */

#include "box.h"

Box::Box(): height(Fraction()) {
}

Box::Box(Box& box): height(box.height) {
}

Box::Box(Rectangle& rec, Fraction& fr): Rectangle(rec) {  
  height = fr;
}

Box::~Box() {
}

Fraction Box::getHeight() {
  return height;
}

Fraction Box::computeArea() {
  return Fraction();
}

Fraction Box::computeVolume() {
  return Rectangle::computeArea() * height;
}

void Box::print(void) const { 
	cout << "\n    Rectangle: " << endl;
  Rectangle::print();
  cout << "\n    Height: " << height << endl;
}

ostream& operator<<(ostream& os, const Box& box) {
  box.print();
  return os;
}

istream& operator>>(istream& in, Box& cir) {
  Rectangle r;
  Fraction f;
  cout << "\n    Rectangle: " << endl;
  cin >> r;
  cout << "\n    Height: ";
  cin >> f;
	while (f < Fraction()) {
		cout << "\n    Invalid input. Height has to be positive. ";
		cout << "\n    Height: ";
		cin >> f;
	};
  cir = Box(r, f);
  return in;
}