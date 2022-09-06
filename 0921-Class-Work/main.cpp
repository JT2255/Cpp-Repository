#include <iostream>
#include <algorithm>  
#include <iostream>  
#include <string>  
using namespace std;

void one()
{
  string s1;
  string s2;
  int x = 0;

  cout << "Enter a sentence\n";
  getline (cin, s1);
  cout << "Enter another\n";
  getline (cin, s2);

  for (int i = 0; i < s1.length(); i++)
  {
    string ss = s1.substr(i, s2.length());

    if (ss == s2)
    {
      x++;
    }
  }

  cout << s2 << " is repeated " << s1 << " " << x << " times\n";
}

void two()
{
  string s1;
  string s2 = "in";

  cout << "\n\nEnter a sentence with the word 'in'\n";
  getline (cin, s1);

  for (int i = 0; i < s1.length(); i++)
  {
    string ss = s1.substr(i, s2.length());

    if (ss == s2)
    {
      cout << "\nThankyou";
      break;
    }
    else
    {
      cout << "Try Again";
      two();
    }
  }
}

void three()
{
  string s1;

  cout << "\n\nEnter a sentence with numbers in it\n";
  getline (cin, s1);

  for(int i = 0; s1[i] != '\0'; ++i)
  {
    while(!( (s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z') || s1[i] == '\0'))
    {
      for(int j = i; s1[j] != '\0'; ++j)
      {
        s1[j] = s1[j+1];
      }
    }
  } 
  cout << endl << s1;
}

void four()
{
  string s1;
  int length = s1.length();
  bool palindrome = true;

  cout << "\n\nEnter a word\n\n";
  cin >> s1;

  if (s1 == string(s1.rbegin(), s1.rend())) 
  {
    cout << endl << s1 << " is a palindrome";
  }
  else
  {
    cout << endl << s1 << " is not a palindrome";
  }
}

void five()
{
  string s1;
  string s2;

  cout << "\n\nEnter a word or sentence\n\n";
  getline (cin, s1);

  s2 += s1[s1.length()-1];

  for(int i = 0; i < s1.length()-1; i++)
  {
    s2+=s1[i];
  } 

  cout << endl << s2;
}

int main()
{
  //one();
  //two();
  //three();
  //four();
  five();
}