#include <iostream>
using namespace std;


int main() 
{
  /*
  int x = 0;

  cout << "Please Enter a Number\n";
  cin >> x;

  for (int i = 2; i <= x / 2; i++)
  {
    if (x % 1 == 0)
    {
      cout << x << " is a prime number";
      break;
    }
    else
    {
      cout << x << " is not a prime number";
      break;
    }
  }
  */


  int y;

  cout << "Please Enter Number of Rows\n";
  cin >> y;

  for (int i = y; i >= 1; --i)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << "*";
    }
    cout << "\n";
  }
}