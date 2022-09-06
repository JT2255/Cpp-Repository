#include <iostream>

using namespace std;

class Square
{
  int length;

  public:
    Square();
    Square(int length);
    ~Square();
    void setLength(int);
    int getLength() {return length;}
    int area() {return length * length;}
};

Square::Square(void)
{
  cout << "Square created" << endl << endl;
}

Square::~Square(void)
{
  cout << endl << endl << "Square deleted";
}

Square::Square(int len)
{
  length = len;
  cout << endl << "Square created with a length of " << length << endl;
}

void Square::setLength(int x)
{
  length = x;
}

int main()
{
  cout << "Enter length" << endl;
  int x;
  cin >> x;
  Square sq(x);
  cout << "The area is " << sq.area() << " and the edge length given was " << sq.getLength();
}