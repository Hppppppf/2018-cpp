#include<iostream>
using namespace std;
class Student
{
private:
    int age;
    char* name;
public:
    Student(int m,char* n)
    {
        age=m;
        name=n;
    }
    Student()
    {
        age=0;
        name="unnamed";
    }
    void SetName(int m,char* n)
    {
        age=m;
        name=n;
        return;
    }
    int Getage()
    {
        return age;
    }
    char* Getname()
    {
        return name;
    }
    ~Student()
    {
        delete []name;
    }
};

int main( )
{
    Student stu[3]={Student(13,"wang")} ;   /*第一个元素用带参构造函数初始化；第二、三个元素由无参构造函数初始化，默认年龄为 0 ，姓名为 "unnamed"*/
    stu[2].SetName(12,"zhang");
    for (int i=0;i<3;i++)
    {
        cout<<stu[i].Getage( )<<","<<stu[i].Getname( )<<"\n";
    }
        /*修改第三个元素的数据成员值*//*这三句可改用一个循环*/
    return 0;
}
