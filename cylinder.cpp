#include "Cylinder.h"

Cylinder::Cylinder() : height(Fraction()) {
}

Cylinder::Cylinder(Cylinder& cy): height(cy.height) {
}

Cylinder::Cylinder(Circle& cir, Fraction& fr): Circle(cir) {
  height = fr;
}

Cylinder::~Cylinder() {
}

Fraction Cylinder::getHeight() {
  return height;
}

Fraction Cylinder::computeArea() {
  return Fraction();
}

Fraction Cylinder::computeVolume() {
  return Circle::computeArea() * height;
}

void Cylinder::print() const {
	cout << "\n    Circle: ";
  Circle::print();
  cout << "\n    Height: " << height << endl;
}

ostream& operator<<(ostream& os, const Cylinder& box) {
  box.print();
  return os;
}

istream& operator>>(istream& in, Cylinder& cy) {
  Circle cir;
  Fraction f;
  cout << "\n    Circle: " << endl;
  cin >> cir;
  cout << "\n    Height: ";
  cin >> f;
	while (f < Fraction()) {
		cout << "\n    Invalid input. Height has to be positive. ";
		cout << "\n    Height: ";
		cin >> f;
	};
  cy = Cylinder(cir, f);
  return in;
}

