#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

class ball
{
public:
    void setX(int _x)
    {
        m_iX=_x;
    }
    int getX()
    {
        return m_iX;
    }
    void setY(int _y)
    {
        m_iY=_y;
    }
    int getY()
    {
        return m_iY;
    }
    void setVx(int _vx)
    {
        m_iVx=_vx;
    }
    int getVx()
    {
        return m_iVx;
    }
        void setVy(int _vy)
    {
        m_iVy=_vy;
    }
    int getVy()
    {
        return m_iVy;
    }
    void initXY()
    {
        m_iX=20;
        m_iX=20;
        m_iVx=1;
        m_iVy=1;
    }
private:
    int m_iX;
    int m_iY;
    int m_iVx;
    int m_iVy;
};
void moveball(ball a)
{
    while(true)
    {
        if (a.getX()==50||a.getX()==1)
            a.setVx(-1*a.getVx());
        if (a.getY()==50||a.getY()==1)
            a.setVy(-1*a.getVy());
        a.setX(a.getX()+a.getVx());
        a.setY(a.getY()+a.getVy());
        system("cls");
        for (int j=0;j<a.getY();j++)
            cout<<endl;
        for (int i=0;i<a.getX();i++)
            cout<<" ";
        cout<<"o";
        Sleep(50);
    }
}
int main(void)
{
    ball a;
    a.initXY();
    moveball(a);
    return 0;
}
