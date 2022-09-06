#include <iostream>
using namespace std;

int main() 
{
  /*
  int x = 0;
  cout << "Input Integer\n";
  cin >> x;
  cout << "The double of " << x << " is " << x*2;
  */

  /*
  int x = 0;
  cout << "Input Integer\n";
  cin >> x;

  if (x > 0)
  {
    cout << "positive";
  }
  else if (x == 0)
  {
    cout << "zero";
  }
  else if (x < 0)
  {
    cout << "negative";
  }
  */

  int x = 0;
  cout << "Input Year\n";
  cin >> x;
  x = x%12;

  switch(x)
  {
    case 0: cout << "monkey"; break;
    case 1: cout << "rooster"; break;
    case 2: cout << "dog"; break;
    case 3: cout << "boar"; break;
    case 4: cout << "rat"; break;
    case 5: cout << "ox"; break;
    case 6: cout << "tiger"; break;
    case 7: cout << "rabbit"; break;
    case 8: cout << "dragon"; break;
    case 9: cout << "snake"; break;
    case 10: cout << "horse"; break;
    case 11: cout << "ram"; break;
  }
}