#include <iostream>
#include <vector>
using namespace std;

vector <int> v1;
vector <int> v2;
int x = 10;
int y = 11;

void print()
{
  cout << "Vector 1: ";

  for (int i = 0; i < 10; i++)
  {
    cout << v1[i] << " ";
  }

  cout << endl;
  cout << "Vector 2: ";

  for (int i = 0; i < 10; i++)
  {
    cout << v2[i] << " ";
  }

  cout << endl << endl;
}

int main() 
{
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(x);
    x += 10;
  }

  for (int i = 0; i < 10; i++)
  {
    v2.push_back(y);
    y += 10;
  }

  print();

  v1.swap(v2); 
  //Looked up list of vector functions to find any useful ones
  //http://www.cplusplus.com/reference/vector/vector/ is the website I used

  print();
}