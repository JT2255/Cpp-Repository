#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

fstream file;
string cheese = "";
vector <string> v1;
int i = 0;

void input()
{
  cout << "Please enter a sentence\n\n";
  getline(cin, cheese);
  file.open("file.txt", ios::app);

  if (!file.fail())
  {
    file << cheese << "\n";
    file.close();
  }
  else
  {
    cout << "Error";
  }
}

void read()
{
  file.open("file.txt", ios::in);
  string s = "";

  		

  if (file.fail())
  {
    cout << "Error";
    exit(0);
  }
	
  while(getline(file, s))
  {
    cout << endl << s << endl;
    v1.push_back(s);
  }
	file.close();
}

void vectorDisplay()
{
  cout << endl << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << v1[i] << endl;
  }
}

int main() 
{
  //input();
  read();
  vectorDisplay();
}