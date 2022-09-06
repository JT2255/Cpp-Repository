#include <iostream>

using namespace std;

void pointer(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void address(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main() 
{
  /*
  int x = 0;
  int *xAdd;
  xAdd = &x;
  cout << endl << &x;
  cout << endl << xAdd;
  */

  int x = 35;
  int y = 73;

  pointer(&x, &y);
  cout << "X: " << x << " Y: " << y << endl;

  int z = 35;
  int u = 73;

  address(z, u);
  cout << "Z: " << z << " U: " << u << endl;
}