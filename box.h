/**
 * Program name:  box.h
 * Discussion:    Box Class
 */

#ifndef BOX_H
#define BOX_H

#include "rectangle.h"

class Box : public Rectangle {
public:
  Box();
  Box(Box&);
  Box(Rectangle&, Fraction&);
  ~Box();

  Fraction getHeight(void);

  void print(void) const;

  Fraction computeArea(void);
  Fraction computeVolume(void);

  friend ostream& operator<<(ostream&, const Box&);
  friend istream& operator>>(istream&, Box&);

private:
  Fraction height;
};

#endif