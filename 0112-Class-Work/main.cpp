#include <stdio.h>
#include<iostream>
#include <string>
using namespace std;


template <class T> class MyList
{
  private: 
    T *list;
    int size;
    
  public:
    MyList();
    void print();
    void add(T);
    int getNum(int);
    void setNum(int, T);
    void removeNum(int);
};

template <class T>  MyList<T>::MyList()
{
  this -> size = 0;
}

template <class T> void MyList<T>::print()
{
  cout << "MyList: ";
  for(int i = 0; i < size; i++)
  {
    cout<<list[i]<<" ";
  }
  cout<<endl;
}

template <class T> void MyList<T>::add(T obj)
{
  if(size == 0) list = new T[size];
  T *temp = new T[size + 1];
  for(int i = 0; i < size; i++ )
  {
    temp[i] = list[i];
  }
  size++;
  temp[size-1] = obj;
  delete [] list;
  list = temp;
}

template <class T> int MyList<T>::getNum(int i)
{
  i = list[i];
  return i;
}

template <class T> void MyList<T>::setNum(int i, T obj)
{
  list[i] = obj;
}

template <class T> void MyList<T>::removeNum(int x)
{
  T *temp = new T[--size];

  for (int i = 0; i < size; i++)
  {
    if (i != x)
    {
      temp[i] = list[i];
    }
  }
  
  delete [] list;
  list = temp;
}


//************************************************
class Circle
{
    private:
        double radius;
    public:
        void setRadius(double r);
        double getRadius();
        double getArea();
        Circle();
        Circle(double);
        bool operator==(const Circle&);
        friend ostream& operator<<(ostream&, const Circle&);
};
bool Circle::operator==(const Circle& obj){
    return radius == obj.radius;
}

ostream& operator<<(ostream& os, const Circle& obj)
{
    os << obj.radius;
    return os;
}
Circle::Circle(double radius){
    this->radius = radius;
}
Circle::Circle(){
    this->radius = 0;
}
void Circle::setRadius(double r){
    radius = r;
}
double Circle::getRadius(){
    return radius;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}

//************************************************

int main()
{
  MyList <int> my2;
  my2.add(5);
  my2.add(5);
  my2.setNum(0, 7);
  my2.getNum(0);
  my2.print();
  my2.removeNum(1);
  my2.print();
}
