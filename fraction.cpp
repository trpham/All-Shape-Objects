
#include "fraction.h"

Fraction::Fraction(): num(0), denom(1) {
}

Fraction::Fraction(const Fraction& arg): num(arg.num), denom(arg.denom) {
}

Fraction::Fraction(int n, int d) {
  int i;
  if (d < 0) {
    n = -n;
    d = -d;
  }
  i = gcf(n, d);
  num = n / i;
  denom = d / i;
}

Fraction::Fraction(int n) : num(n), denom(1) {
}

Fraction::~Fraction() {
}

int Fraction::getNum() const {
  return num;
}

void Fraction::setNum(int n) {
  num = n;
}

int Fraction::getDenom() const{
  return denom;
}

void Fraction::setDenom(int d) {
  denom = d;
}

void Fraction::print() const {
  cout << num << "/" << denom;
}

// Greatest Common Factor
int Fraction::gcf(int a, int b) {
  if (b == 0)
    return a = (a < 0) ? -a : a;
  else
    return gcf(b, a % b);
}

Fraction Fraction::operator+(const Fraction& other) {
  return Fraction(num * other.getDenom() + denom * other.getNum(), denom * other.getDenom());
}

Fraction Fraction::operator-(const Fraction& other)  {
  return Fraction(num * other.getDenom() - denom * other.getNum(), denom * other.getDenom());
}

Fraction Fraction::operator*(const Fraction& other){
  return Fraction(num * other.getNum(), denom * other.getDenom());
}

Fraction Fraction::operator/(const Fraction& other) {
  return Fraction(num * other.getDenom(), denom * other.getNum());
}

Fraction Fraction::operator+(int a){
  return Fraction(num + denom * a, denom);
}

Fraction Fraction::operator*(int a){
  return Fraction(num * a, denom);
}

bool Fraction::operator<(const Fraction& fra) {
  return (num * fra.denom < denom * fra.num);
}

bool Fraction::operator>(const Fraction& fra) {
  return (num * fra.denom > denom * fra.num);
}

bool Fraction::operator==(const Fraction& fra){
  return (num * fra.denom == denom * fra.num);
}

ostream& operator<<(ostream& os, const Fraction& fr) {
  fr.print();
  return os;
}

istream& operator>>(istream& in, Fraction& fr) {
  int a, b;
  cout << "\n          Numerator: ";
  cin >> a;
  cout << "          Denominator: ";
  cin >> b;
  while (b == 0) {
    cout << "\n          Invalid Input: ";
    cout << "\n          Denominator can not be 0. ";
    cout << "\n          Denominator: ";
    cin >> b;
  }
  fr = Fraction(a, b);
  return in;
}