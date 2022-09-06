#include <iostream>
#include <stack>
#include <fstream>
#include <queue>

using namespace std;

struct Pos
{
  int x;
  int y;
  Pos *prev;
};

Pos start;
Pos finish;

string maze [6][6];
bool visited[6][6];

queue<Pos> mazeQueue;
int current;

void read()
{
  int x = 0, y = 0;
  char c;
  char str[256];
  ifstream is("maze.txt");
  
  while (is.get(c))
  {
    if (x < 6)
    {
      maze[y][x] = c;
      x++;
    }
    else
    {
      y++;
      maze[y][x] = c;
      x = 0;
    }
  }

  for(int i = 0; i < 6; i++)
  {
      for(int j = 0; j < 6; j++)
      {
        cout << " " << maze[i][j] << " ";
        visited[i][j] = false;

        if (maze[i][j] == "p")
        {
          start.x = i;
          start.y = j;
          start.prev = NULL;
          visited[i][j] = true;
        }

        if (maze[i][j] == "S")
        {
          finish.x = i;
          finish.y = j;
          finish.prev = NULL;
        }

        if (maze[i][j] == "X")
        {
          visited[i][j] = true;
        }
      }
    cout<<"\n";
  }

  cout << endl << endl;
}

void gamer()
{
  Pos *current;
  mazeQueue.push(start);
  while (!mazeQueue.empty())
  {
    current = &mazeQueue.front();
    mazeQueue.pop();

    if (current -> x == finish.x && current -> y == finish.y)
    {
      current = current -> prev;

      while (current -> prev != NULL)
      {
        maze[current -> x][current -> y] = "|";
        current = current -> prev;
      }

      for (int i = 0; i < 6; i++)
      {
        for (int j = 0; j < 6; j++)
        {
          cout << maze[i][j] << " ";
        }
        cout << endl;
      }
      break;
    }
    else
    { 
      if ((current -> y + 1 < 6) && (!visited[current -> x][current -> y + 1]))
      {
        visited[current -> x][current -> y + 1] = true;
        Pos temp;
        temp.x = current -> x;
        temp.y = current -> y + 1;
        temp.prev = current;
        mazeQueue.push(temp);
      }
    
      if ((current -> y - 1 >= 0) && (!visited[current -> x][current -> y - 1]))
      {
        visited[current -> x][current -> y - 1] = true;
        Pos temp;
        temp.x = current -> x;
        temp.y = current -> y - 1;
        temp.prev = current;
        mazeQueue.push(temp);
      }

      if ((current -> x - 1 >= 0) && (!visited[current -> x - 1][current -> y]))
      {
        visited[current -> x - 1][current -> y] = true;
        Pos temp;
        temp.x = current -> x - 1;
        temp.y = current -> y;
        temp.prev = current;
        mazeQueue.push(temp);
      }

      if ((current -> x + 1 < 6) && (!visited[current -> x + 1][current -> y]))
      {
        visited[current -> x + 1][current -> y] = true;
        Pos temp;
        temp.x = current -> x + 1;
        temp.y = current -> y;
        temp.prev = current;
        mazeQueue.push(temp);
      }
    }
  } 
}


int main()
{
  read();
  gamer();
}
