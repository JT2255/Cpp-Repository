#include <iostream>
using namespace std;

template<class S> class Square
{
  private:
    S length;
  public:
    Square(S);
    S getArea();
    Square operator+(const Square& b)
    {
      Square box(0);
      box.length = this->length + b.length;
      return box;
    }     
};

template <class S> Square<S>::Square(S length)
{
  this -> length = length;
}

template <class S> S Square<S>::getArea()
{
  return length*length;
}

int main()
{
    Square s(2.4);
    cout << s.getArea() << endl;
    Square s1(3.2);
    Square s2 = s + s1;
    cout << s2.getArea() << endl;
    return 0;
}

