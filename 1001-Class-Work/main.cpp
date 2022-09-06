#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

struct wordClue
{
  string word = "";
  string clue = "";
  
};

fstream file;
vector <wordClue> v1;
vector <string> v2;
int a = 0;
string s1 = "";


void load()
{
  a = fmod((int)rand(), 5);
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

    a.word = v2[i];
    a.clue = v2[++i];
    v1.push_back(a);
  }

  s1 = string(v1[a].word.size(), '-');
}

void play()
{
  cout << "Clue: " << v1[a].clue << endl; 
  cout << s1 << endl;
  cout << "Enter a letter" << endl;
  char s2 = ' ';
  cin >> s2;

  for (int i = 0; i < v1[a].word.size(); i++)
  {
    if (s2 == v1[a].word[i])
    {
      s1[i] = s2;
    }
  }

if (s1 == v1[a].word)
{
  cout << "Congrats!!!!!!" << endl;
  load();
  play();
}
else
{
  play();
}

}

int main() 
{
  load();
  play();
}