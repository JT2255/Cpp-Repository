#include <iostream>
using namespace std;

string H[9][9];

void initialize()
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (i == 4 || j == 0 || j == 8)
      {
        H[i][j] = "H ";
      }
      else
      {
        H[i][j] = "  ";
      }
    }  
  }
}

void print()
{
  for(int i = 0; i < 9; i++)
  {
    for(int j = 0; j < 9; j++)
    {
      cout << H[i][j];
    }
    cout<<"\n";
  }
}

int main()
{
  //H
  initialize();
  print();
}