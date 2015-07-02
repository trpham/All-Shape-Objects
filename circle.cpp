/**
 * Program name:  Circle.cpp
 * Discussion:    Cirlce Class Implementation
 * Written By:    Truong Pham
 * Date:          2014/12/11
 */

#include "circle.h"

Circle::Circle() : center(Point(Fraction(0, 1),
	Fraction(0, 1))), radius(Fraction(0, 1)) {
}

Circle::Circle(Circle& cir) : center(cir.center), radius(cir.radius) {
}

Circle::Circle(Point& pt, Fraction& fr) : center(pt), radius(fr) {
}

Circle::~Circle() {
}

Fraction Circle::computeArea() {
	return Fraction(157, 50)* radius * radius;
}

Fraction Circle::computeVolume() {
	return Fraction();
}

void Circle::print() const{
	cout << "\n      Center: ";
	cout << center;
	cout << "\n      Radius: ";
	cout << radius << endl;
}

ostream& operator<<(ostream& os, const Circle& cir) {
	cir.print();
	return os;
}

istream& operator>>(istream& in, Circle& cir) {
	Point p;
	Fraction r;
	cout << "\n      Center: ";
	cin >> p;
	cout << "\n      Radius: ";
	cin >> r;
	while (r < Fraction()) {
		cout << "\n      Invalid input. Radius has to be positive: ";
		cout << "\n      Radius: ";
		cin >> r;
	};
	cir = Circle(p, r);
	return in;
}