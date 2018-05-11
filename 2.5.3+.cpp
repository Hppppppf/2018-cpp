#include<iostream>
#include<cstring>
using namespace std;

class Station
{
protected:
    char from[20];
    char to[20];
public:
    Station(char f[20],char t[20])
    {
        strcpy(from,f);
        strcpy(to,t);
    }
    void disp()
    {
        cout<<from<<" "<<to<<" ";
    }
};

class  Mile
{
protected:
    double mile;
public:
    Mile(double m)
    {
        mile=m;
    }
    void disp()
    {
        cout<<mile<<" ";
    }
};

class Price:public Station,public Mile
{
private:
    double price;
public:
    Price(char f[20],char t[20],double m):Station(f,t),Mile(m)
    {
        double mi=m;
        price=8;
        if (mi>3)
        {
            if ((mi-int(mi))>=0.5)    mi=int(mi)+1;
            else if(m-int(m)!=0) mi=int(mi)+0.5;
            price+=(mi-3)*1.4;
        }

    }
    void disp()
    {
        Station::disp();
        Mile::disp();
        cout<<price<<endl;
    }
};

int main()
{
    char from[20],to[20];
    double mile;
    cin>>from>>to>>mile;
    Price aa(from,to,mile);
    aa.disp();
    return 0;
}
