#include <iostream>

using namespace std;

int x;
int y;
int z;
int rolls = 1000;
int stats[12] = {0};
int total;

int main() 
{
  while (rolls > 0)
  {
    x = rand() % 6 + 1;
    y = rand() % 6 + 1;
    z = x + y;
    stats[z - 1]++;
    rolls--;
  }

  for (int i = 0; i < 12; i++)
  {
    total += stats[i];
  }

  for (int i = 1; i < 12; i++)
  {
    cout << i + 1 << " was rolled " << stats[i] << " times with a frequency of " << stats[i]/(total/100) << "%\n";
  }
}