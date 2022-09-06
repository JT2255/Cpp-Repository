#include <iostream>
using namespace std;
class Circle
{
  double radius;
  public:
    void setRad(double r);
    double getRad();
    double getArea();
    Circle();
    Circle(double);  
};

Circle::Circle()
{
  radius = 32.8;
}

Circle::Circle(double r)
{
  this -> radius = r;
}

void Circle::setRad(double r)
{
  this -> radius = r; 
}

double Circle::getRad()
{
  return radius;
}


int main()
{
  Circle c1;
  cout << c1.getRad() << endl;
    
  Circle *cc1 = &c1;
  cc1 -> setRad(111);
  cout << c1.getRad() << endl;
    
  Circle *c2 = new Circle(56);
  cout << c2 -> getRad() << endl;  
  return 0;
}
