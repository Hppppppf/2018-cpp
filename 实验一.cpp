#include<iostream>
using namespace std;

class Time
{
private:
    int Hour;
    int Minute;
    int Second;
public:
    Time()
    {
        cout<<"无参构造函数调用"<<endl;
        Hour=0;
        Minute=0;
        Second=0;
    }
    Time(const Time &obj)
    {
        cout<<"拷贝构造函数调用"<<endl;
        Hour = obj.Hour;
        Minute = obj.Minute;
        Second = obj.Second;
    }
    ~Time()
    {
        cout<<"析构函数调用"<<endl;
    }
    void SetTime()
    {
        cout<<"Hour:";
        cin>>Hour;
        cout<<"Minute:";
        cin>>Minute;
        cout<<"Second:";
        cin>>Second;
    }
    void SetHour()
    {
        cout<<"new Hour:";
        cin>>Hour;
    }
    void SetMinute()
    {
        cout<<"new Minute:";
        cin>>Minute;
    }
    void SetSecond()
    {
        cout<<"new Second:";
        cin>>Second;
    }
    int GetHour()
    {
        return Hour;
    }
    int GetMinute()
    {
        return Minute;
    }
    int GetSecond()
    {
        return Second;
    }
    void PrintTime()
    {
        cout<<"Hour:"<<Hour<<"  "<<"Minute:"<<Minute<<" "<<"Second:"<<Second<<endl;
    }
    void IncreaseOneSecond()
    {
        cout<<"+1s"<<endl;
        Second++;
        if (Second==60)
        {
            Minute++;
            Second=0;
        }
        if (Minute==60)
        {
            Hour++;
            Minute=0;
        }
    }
};

void f(Time *);

int main()
{
    Time A;
   // f(A);
    A.SetTime();
   // f(A);
    A.SetSecond();
   // f(A);
    A.IncreaseOneSecond();
    f(&A);
    return 0;
}

void f(Time *t)
{
    t->PrintTime();
}
