#include <iostream>
using namespace std;
struct Node
{
 int data;
 Node *next;
};

Node *current;
Node *newOne;
int x;
int y;

void displayLL(Node *pointN)
{
  int i = 0;

  while (i < 6)
  {  
    cout << pointN -> data << endl;
    pointN = pointN -> next;
    i++;
  }
}

void insertLL(int val, int loc, Node *firstN)
{
  int i = 0;
  Node *current;

  current = firstN;

  while (current != NULL)
  {
    if (i != loc)
    {
      i++;
      current = current -> next;
    }
    else
    {
      Node *temp = new Node;
      temp -> data = val;
      temp -> next = current -> next;
      current -> next = temp;
      return;
    }
  }

  displayLL(firstN);
}

int main()
{
  Node *first = new Node;
  first -> data = 0;
  current = first;
  

  for(int i = 1; i < 5; i++)
  { 
    newOne = new Node;
    current -> next = newOne;
    newOne -> data = i;
    current = current->next;
    current -> next = NULL;
  }

  current = first;

  cout << "Enter a value" << endl;
  cin >> x;
  cout << "Enter a position" << endl;
  cin >> y;
  cout << endl << endl;

  insertLL(x, y, first);
  displayLL(current);

 return 0;
} 