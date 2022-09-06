#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct wordClue
{
  string word = "";
  string clue = "";
  
}
wC [3];

fstream file;
vector <wordClue> v1;
vector <string> v2;

void clown()
{
  for (int i = 0; i < 3; i++)
  {
    wC[i].word = "hat";
    wC[i].clue = "h_t";
  }

  for (int i = 0; i < 3; i++)
  {
    cout << wC[i].word << endl;
    cout << wC[i].clue << endl;
  }
}

void read()
{
  file.open("words.txt", ios::in);
  string s = "";



  if (file.fail())
  {
    cout << "Error";
    exit(0);
  }
	
  while(getline(file, s))
  {
    v2.push_back(s);
  }
	file.close();

  for (int i = 0; i < v2.size(); i++)
  {
    wordClue a;

    a.clue = v2[i];
    a.word = v2[++i];
    v1.push_back(a);
  }

  for (int i = 0; i < v1.size(); i++)
  {
      cout << "Clue: " << v1[i].clue << endl;
      cout << "Word: " << v1[i].word << endl;    
  }
}


int main() 
{
  //clown(); // first part of assignment
  read(); // vector
}