#include <iostream>
using namespace std;

int x = 3;
int y = 1;

string maze [4][4] = { {"\n X", "-", "X", "-"}, {"-", "-", "-", "P"}, {"-", "-", "X", "-"}, {"-", "X", "X", "-"} };
  

void initialize()
{
  for(int i = 0; i < 4; i++)
    {
      for(int j = 0; j < 4; j++)
      {
        cout << " " << maze[i][j] << " ";
      }
    cout<<"\n";
  }
}

void command()
{
  string input;
  cout << "\n\nPlease enter n, s, e, w, or q\n\n";
  cin >> input;

  if (input == "n")
  {
    if (y > 0 && maze[y - 1][x] != "X")
    {
      maze[y - 1][x] = "P";
      maze[y][x] = "-";
      y = y - 1;
      initialize();
      command();
    }
    else
    {
      cout << "\nno";
      command();
    }
  }
  else if (input == "s")
  {
    if (y < 3 && maze[y + 1][x] != "X")
    {
      maze[y + 1][x] = "P";
      maze[y][x] = "-";
      y = y + 1;
      initialize();
      command();
    }
    else
    {
      cout << "\nno";
      command();     
    }
  }
  else if (input == "e")
  {
    if (x > 0 && maze[y][x - 1] != "X")
    {
      maze[y][x - 1] = "P";
      maze[y][x] = "-";
      x = x - 1;
      initialize();
      command();
    }
    else
    {
      cout << "\nno";
      command();
    }
  }
  else if (input == "w")
  {
    if (x < 3 && maze[y][x + 1] != "X")
    {
      maze[y][x + 1] = "P";
      maze[y][x] = "-";
      x = x + 1;
      initialize();
      command();
    }
    else
    {
      cout << "\nno";
      command();
    }
  }
  else if (input == "q")
  {
    cout << "\nGoodbye";
    exit(0);
  }
}

int main()
{
  initialize();
  command();
}