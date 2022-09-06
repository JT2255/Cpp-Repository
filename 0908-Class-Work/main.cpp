#include <iostream>
using namespace std;

int main() {
  /*
  int num1 = 0, num2 = 0, num3 = 0;
  int numa = 0, numb = 0;
  int mins = 0, hours = 0;
  cout << "My name is Joe\nI've played games before.\n";
  cout << "Please enter three integers.\n";
  cin >> num1; cin >> num2; cin >> num3;
  cout << "\nThe average of those numbers is: " << ((num1 + num2 + num3) / 3) << "\n\nPlease enter two more numbers.\n";
  cin >> numa; cin >> numb;
  cout << "The difference between the first number and the second is: " << numa - numb;
  */
   
  

  int x = 0, y = 0;

  cout << "Enter the amount of time you have watched TV today\n";
  cin >> x;
  y = x / 60;
  cout << "The number of hours and minutes is: " << y << " and " << x % 60 << " minutes";
}