#include <iostream>
#include <ctime>
using namespace std;

  int randNum1;
  int randNum2;
  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr2[3][3];

void invertPyramid()
{
  int rows;
  cout << "Enter number of rows" << endl << endl;
  cin >> rows;
  cout << endl;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    for (int j = i; j <= rows; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

void randArr()
{
  for (int i = 0; i < 9; i++)
  {
    if(arr2[randNum1][randNum2] > 0)
    {
      randNum1 = rand() % 3;
      randNum2 = rand() % 3;
    }

    arr2[randNum1][randNum2] = arr[i];
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr2[i][j];    
    }
    cout << endl;
  }
}

void getMaxSum()
{
  int max = 0;
  int row1;
  int row2;
  int row3;

  row1 = arr2[0][0] + arr2[0][1] + arr2[0][2];
  row2 = arr2[1][0] + arr2[1][1] + arr2[1][2];
  row3 = arr2[2][0] + arr2[2][1] + arr2[2][2];

  if (row1 >= row2 && row1 >= row3)
  {
    cout << "Max: " << row1;
  }

  if (row2 >= row1 && row2 >= row3)
  {
    cout << "Max: " << row2;
  }

  if (row3 >= row1 && row3 >= row2)
  {
    cout << "Max: " << row3;
  }
}


int main() 
{
  srand(time(NULL));
  invertPyramid();
  randArr();
  getMaxSum();
}