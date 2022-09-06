#include <iostream> 

using namespace std;

template <class Low>
Low GetMin (Low a, Low b, Low c)
{
  return (min(a, min(b, c)));
}



int main() 
{
  int a = 10, b = 5, c = 0, d;

  d = GetMin(a, b, c);

  cout << "The lowest number is " << d << endl;
}