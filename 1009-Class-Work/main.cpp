#include <iostream>

using namespace std;

void arr()
{
  int x;
  int y;
  int * a;
  cout << "How many numbers do you want in the array?" << endl;
  cin >> x;
  a = new (nothrow)int[x];

  if (a == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (y = 0; y < x; y++)
    {
      a[y] = rand() % 100 + 1;
    }
    cout << "Nums: ";
    for (y = 0; y < x; y++)
    {
      cout << a[y] << " ";
    }
      
    delete[] a;
  }

  cout << endl << endl;
  arr();
}

int main()
{
  arr();
}