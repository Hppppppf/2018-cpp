#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
protected:
    char name[30];
    int working_years;
public:
    Employee(const char nm[30]="unnamed",int wy=0)
    {
        strcpy(name,nm);
        working_years=wy;
    }
    char *Getname()
    {
        return name;
    }
    double ComputePay()
    {
        return working_years*35;
    }
    void SetWorkyears(int wy)
    {
        working_years=wy;
    }
};

class Worker :public Employee
{
private:
    double pay_per_hour;
    int work_time;
public:
    Worker(char na[30],int y,int x):pay_per_hour(50)
    {
        strcpy(name,na);
        working_years=y;
        work_time=x;
    }
    double count_pay()
    {
        return pay_per_hour*work_time+ComputePay();
    }
    void SetWorktime(int wt)
    {
        work_time=wt;
    }
    void Setpay_per_hour(int x)
    {
        pay_per_hour=x;
    }
};

class SalesPerson :public Employee
{
private:
    double pay_per_hour;
    double saleroom;
    int work_time;
public:
    SalesPerson(char na[30],int x,int y,int z)
    {
        strcpy(name,na);
        working_years=x;
        saleroom=y;
        pay_per_hour=z;
    }
    double count_pay()
    {
        return pay_per_hour*work_time+0.01*saleroom+ComputePay();
    }
    void SetWorktime(int wt)
    {
        work_time=wt;
    }
    void Setpay_per_hour(int x)
    {
        pay_per_hour=x;
    }
    void Setsalesroom(double sr)
    {
        saleroom=sr;
    }
};

class Manager :public Employee
{
public:
    Manager(char na[30],int x):Employee(na,x){}
    double count_pay()
    {
        return 1000+working_years*35;
    }
};

int main()
{
	Worker work("zhangqiang",3,200);
	cout<<"¹¤×Ê="<<work.count_pay()<<endl;
	work.SetWorktime(180);
	work.SetWorkyears(10);
	work.Setpay_per_hour(30);
	cout<<work.Getname()<<"  "<<work.count_pay()<<endl;

	SalesPerson sales("wangjun",5,300000,25);

	sales.SetWorktime(40);
	sales.Setpay_per_hour(80);
	sales.Setsalesroom(450000);
	cout<<sales.Getname()<<"  "<<sales.count_pay()<<endl;

	Manager mana("sunchao",20);
	cout<<mana.Getname()<<"  "<<mana.count_pay()<<endl;
	return 0;
}
