#include <iostream>
#include <stack>
#include <iostream>
#include <fstream>

using namespace std;



void read()
{
  stack<char> stk;

  char str[256];

  ifstream is("text.txt"); 

  char c;
  while (is.get(c))
  {
    if (c == '{')
    {
      stk.push(c);
    }

    if (c == '}')
    {
      if (stk.empty())
      {
        cout << endl << "Warning, Error in Brackets Found";
      }
      else
      {
        char temp = stk.top();
        stk.pop();

        if (temp != '{')
        {
          cout << endl << "Warning, Error in Brackets Found";
        }
      }
    }

    cout << c;
  }

  if (!stk.empty())
  {
    cout << endl << "Warning, Error in Brackets Found";
  }

  is.close();   
}

/* void convert(int x)  Binary Conversion Code
{
  int remainder;
  int top;
  stack <int> stk;

  while (x > 0)
  {
    remainder = x % 2;
    x = x / 2;
    stk.push(x);
  }

  while (stk.empty() == false)
  {
    top = stk.top();
    stk.pop();
    cout << top;
  }
}
*/

int main() 
{
  /*
  int num; 
  cout << "Enter the number you wish to convert" << endl;
  cin >> num;
  convert(num);
  */

  read();
}