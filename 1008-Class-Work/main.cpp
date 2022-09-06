#include <iostream>
using namespace std;

int a1[] = {1, 2, 3, 4, 5};
int *x;


void displayArr1(int ar[], int size) 
{
  
  for (int i = 0; i < size; i++)
  {
    cout << ar[i] << endl;
  }
}

void displayArr2(int ar[], int size)
{
  x = a1;

  for (int i = 0; i < size; i++)
  {
    cout << *(x + i) << endl;
  }
}

void displayArr3(int * ar, int size)  
{
  for (int i = 0; i < size; i++)
  {
    cout << ar[i] << endl;
  }
}

void displayArr4(int * ar, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << *(x + i) << endl;
  }
}

int main() 
{
  x = a1;
  displayArr1(a1, 5);
  cout << endl << endl;
  displayArr2(a1, 5);
  cout << endl << endl;
  displayArr3(x, 5);
  cout << endl << endl;
  displayArr4(x, 5);
  cout << endl << endl;
}