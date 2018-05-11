#include<iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;
public:
    void setDate(int a=2000,int b=1,int c=1)
    {
        year=a;
        month=b;
        day=c;
    }
    int Getyear()
    {
        return year;
    }
    int Getmonth()
    {
        return month;
    }
    int Getday()
    {
        return day;
    }
};

class Product
{
       char *name;
       double price;
       Date deptime;
       char *factory;
       bool easy_break;
       Date valtime;
       char *colour;
       double weight;
       char *brand;
public:
       Product(char *na)
       {
           cout<<"Constrcting One...."<<endl;
           name=na;
       }
       Product(char *na,double pr):factory("unnamed"),easy_break(0)
       {
           cout<<"Constrcting Two...."<<endl;
           name=na;
           price=pr;
           deptime.setDate();
           valtime.setDate();
       }
       Product(char *na,double pr,int y,int m,int d):factory("unnamed"),easy_break(0)
       {
           cout<<"Constrcting Three...."<<endl;
           name=na;
           price=pr;
           deptime.setDate(y,m,d);
           valtime.setDate(2000,1,1);
       }
       void SetProduct(char *na="unnamed",double pr=1,int y=1,int m=1,int d=1,char *fa="unnamed",bool e=1,int vy=1,int vm=1,int vd=1,char *co="red",double we=0)
       {
           name=na;
           price=pr;
           deptime.setDate(y,m,d);
           factory=fa;
           easy_break=e;
           valtime.setDate(vy,vm,vd);
           colour=co;
           weight=we;
           brand="Tesla";
       }
       void output (  )
       {
           cout<<name<<" "<<price<<endl;
           cout<<deptime.Getyear()<<"-"<<deptime.Getmonth()<<"-"<<deptime.Getday()<<endl;
           cout<<factory<<" "<<easy_break<<endl;
           cout<<valtime.Getyear()<<"-"<<valtime.Getmonth()<<"-"<<valtime.Getday()<<endl;
        }
};
int main()
{
       char s[10];
       cin>>s;
       Product p1("car");
       Product p2("glass",3.00);
       Product p3("pen",5.00,2009,3,14);
       p1.SetProduct("car",100000.0,2009,3,14,"nanjing",0,2010,10,14,"red",1.5);
       p1.output();
       p2.output();
       p3.output();
       return 0;
}
