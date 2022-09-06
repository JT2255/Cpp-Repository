#include <iostream>
using namespace std;

string board [9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
bool turnX = true;
int square;

void initialize()
{
  cout << "\n";
  int a;

  for (int i = 0; i < 9; i++)
  {
    if (a == 3)
    {
      cout << "\n";
      a = 1;
    }
    else
    {
      a++;
    }

    cout << board[i] << " ";
  }
}

void checkWin()
{
   if (board[0] == "X" && board[1] == "X" && board[2] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[3] == "X" && board[4] == "X" && board[5] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[6] == "X" && board[7] == "X" && board[8] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[0] == "X" && board[3] == "X" && board[6] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[1] == "X" && board[4] == "X" && board[7] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[2] == "X" && board[5] == "X" && board[8] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[0] == "X" && board[4] == "X" && board[8] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[2] == "X" && board[4] == "X" && board[6] == "X")
   {
     cout << "X Wins!";
     exit(0);
   }
   else if (board[0] == "O" && board[1] == "O" && board[2] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[3] == "O" && board[4] == "O" && board[5] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[6] == "O" && board[7] == "O" && board[8] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[0] == "O" && board[3] == "O" && board[6] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[1] == "O" && board[4] == "O" && board[7] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[2] == "O" && board[5] == "O" && board[8] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[0] == "O" && board[4] == "O" && board[8] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
   else if (board[2] == "O" && board[4] == "O" && board[6] == "O")
   {
     cout << "O Wins!";
     exit(0);
   }
}

void play()
{
  cout << "\n\nPlease select the space you want\n\n";
  cin >> square;

  if (turnX)
  {
    board[square - 1] = "X";
    checkWin();
    turnX = false;
    initialize();
    play();
  }
  else if (!turnX)
  {
    board[square - 1] = "O";
    checkWin();
    turnX = true;
    initialize();
    play();
  }
}

int main()
{
  initialize();
  play();
}