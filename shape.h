/**
 * Program name:  shape.h
 * Discussion:    Shape class
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "fraction.h"

class Shape {
public:
  virtual Fraction computeArea() = 0;
  virtual Fraction computeVolume() = 0;
  virtual void print() const = 0;
};

#endif