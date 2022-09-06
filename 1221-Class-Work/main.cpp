#include <iostream>
#include <math.h>

using namespace std;

class Circle
{
  int radius;

  public:
    void setValue(int);
    float area() {return radius * radius * M_PI;}
    int radiusOut() {return radius;}
};

void Circle::setValue(int x)
{
  radius = x;
}

int main() 
{
  int x;
  Circle circ;
  cout << "Please Enter Radius" << endl;
  cin >> x;
  circ.setValue(x);
  cout << "The area is " << circ.area() << " and the radius given was " << circ.radiusOut();
}