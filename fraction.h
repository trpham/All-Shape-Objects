/**
 * Program name:  Fraction.h
 * Discussion:    Fraction Class
 */

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
public:
  Fraction();
  Fraction(const Fraction&);
  Fraction(int);
  Fraction(int, int);

  ~Fraction();

  void setNum(int);
  void setDenom(int);

  int getDenom() const;
  int getNum() const;

  int gcf(int, int);

  void print() const;

  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator/(const Fraction&);

  Fraction operator+(int);
  Fraction operator*(int);

  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  bool operator==(const Fraction&);

  friend ostream& operator<<(ostream&, const Fraction&);
  friend istream& operator>>(istream&, Fraction&);

private:
  int num;
  int denom;
};

#endif