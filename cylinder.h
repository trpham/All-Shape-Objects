/**
 * Program name:  Cylinder.h
 * Discussion:    Cylinder Class
 */

#ifndef Cylinder_H
#define Cylinder_H

#include "circle.h"

class Cylinder : public Circle {
public:
  Cylinder();
  Cylinder(Cylinder&);
  Cylinder(Circle&, Fraction&);
  ~Cylinder();

  Fraction getHeight(void);
   
  void print(void) const;

  Fraction computeArea(void);
  Fraction computeVolume(void);

  friend ostream& operator<<(ostream&, const Cylinder&);
  friend istream& operator>>(istream&, Cylinder&);

private:
  Fraction height;
};

#endif