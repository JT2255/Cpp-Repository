#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

void addNodes(Node *first, int items[], int N)
{
  Node *temp = first;

  while (temp -> next != NULL)
  {
    temp = temp -> next;
  }

  for (int i = 0; i < N; i++)
  {
    Node *x = new Node;
    x -> data = items[i];
    temp -> next = x;
    temp = x;
  }
}

void display(Node *start)
{
  Node *current = start;

  while (current != NULL)
  {
    cout << current -> data << " ";
    current = current -> next;
  }
}

int main() 
{
  int arr[5];

  Node *add = new Node;
  Node *first = new Node;
  add -> data = 22;
  first -> data = 20;
  first -> next = add;
  display(first);


  for (int i = 0; i < 5; i++)
  {
    arr[i] = i;
  }

  addNodes(first, arr, 5);
  display(first);
}