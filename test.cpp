#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class Point
{
     private:
          double X, Y;
     public:
          Point(double a, double b)
          {
              X=a;
              Y=b;
          }
          Point(Point &p)
          {
              X=p.GetX();
              Y=p.GetY();
          }
          double GetX()
          {
              return X;
          }
          double GetY()
          {
              return Y;
          }
};

class Line
{
    private:
        Point A, B;
        double length;
    public:
        Line(Point p1, Point p2):A(p1.GetX(),p1.GetY()),B(p2.GetX(),p2.GetY())
        {
            length=sqrt((p1.GetX()-p2.GetX())*(p1.GetX()-p2.GetX())+(p1.GetY()-p2.GetY())*(p1.GetY()-p2.GetY()));
        }
        double GetLength()
        {
            return length;
        }
};

int main()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point a(x1,y1),b(x2,y2);
    Line aa(a,b);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<aa.GetLength();
    return 0;
}
