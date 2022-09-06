#include <iostream>
#include <vector>
#include <string>

using namespace std;

string fVal;

struct Node       // create node Struct
{
  char t;
  Node *next;
};

Node *trainTracks[5];
char cars[] = {'B', 'P', 'F', 'C'};
//box, passenger, flat, coal

void listVal(Node *f, char x) //creates vals
{
  Node *y = f -> next;
  int l = 0;

  while (y != NULL)
  {
    if (y -> t == x)
    {
      return;
    }

    l++;
    y = y -> next;
  }

  f -> next -> t = x;
}

Node *initialize(char value) //initializes linked list
{ 
  Node *f = new Node();
  Node *current = new Node();
  int l = 3 + (rand() % 3);
  f -> t = ' ';
  f -> next = current;

  for (int i = 0; i < l; i++)
  {
    current -> t = cars[rand() % 4];
    Node *x = new Node;
    current -> next = x;
    current = x;
  }

  current -> next = NULL;
  listVal(f, value);
  
  return f;
}

void Display(int x, bool t) //display tracks correctly and spaces them out
{
  cout << x << "----";
  Node *n = trainTracks[x];
  int y = 1;

  if (n -> next != NULL)
  {
    while (n -> t && n != NULL)
    {
      if (n -> t == ' ')
      {
        n = n -> next;
      }

      cout << "|" << y++ << " " << string(3, n -> t) << "|-";
      n = n -> next;
    }
  }

   cout << string(100 - (8 + 11 * y - 1), '=') << "\n" << (t ? "\n\n" : ""); //eddie helped with this line
}

void dList() //displays the actual list
{
  cout << endl << endl;

  for (int i = 0; i < 5; i++)
  {
    Display(i, i == 0);
  }
}

void moveCar(int track, int car, int newTrack) //move cars around
{
  int current = 0;

  Node *node = trainTracks[track];

  while (current < car - 1)
  {
    node = node -> next;
    current++;
  }

    Node *temporary = node -> next;
    node -> next = NULL;

    current = 0;
    node = trainTracks[newTrack];

    while (node -> next -> t && node -> next != NULL)
    {
      node = node -> next;
    }

    node -> next = temporary;
}

int main() 
{
  for (int i = 1; i < 5; i++)
  {
    char car = cars[rand() % 4];
    fVal += car;
    trainTracks[i] = initialize(car);
  }

  trainTracks[0] = new Node();
  trainTracks[0] -> t = ' ';
  trainTracks[0] -> next = NULL;

 
  dList();
  cout << "\n\nThe train to create is: " << fVal << "\n\n";
    
  cout << "\nEnter a track number: ";
  int track = (cin >> track, track);

  cout << "\nEnter a car number: ";
  int trainCar = (cin >> trainCar, trainCar);

  cout << "\nEnter the new track number: ";
  int newTrack = (cin >> newTrack, newTrack);

  moveCar(track, trainCar, newTrack);
}