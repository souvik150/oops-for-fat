#include <iostream>
using namespace std;
class Shape
{
public:
  virtual void print()
  {
    cout << "\nThis is a shape.";
  }
};
class Polygon : public Shape
{
public:
  void print()
  {
    cout << "\nPolygon is a shape.";
  }
};
class Rectangle : public Polygon
{
public:
  void print()
  {
    cout << "\nRectangle is a Polygon.";
  }
};
class Triangle : public Polygon
{
public:
  void print()
  {
    cout << "\nTriangle is a Polygon.";
  }
};
class Square : public Rectangle
{
public:
  void print()
  {
    cout << "\nSquare is a Rectangle.";
  }
};
int main()
{
  Shape S;
  Polygon P;
  Rectangle R;
  Triangle T;
  Square Sq;
  S.print();
  P.print();
  R.print();
  T.print();
  Sq.print();
  return 0;
}