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
    Student stu[3]={Student(13,"wang")} ;   /*��һ��Ԫ���ô��ι��캯����ʼ�����ڶ�������Ԫ�����޲ι��캯����ʼ����Ĭ������Ϊ 0 ������Ϊ "unnamed"*/
    stu[2].SetName(12,"zhang");
    for (int i=0;i<3;i++)
    {
        cout<<stu[i].Getage( )<<","<<stu[i].Getname( )<<"\n";
    }
        /*�޸ĵ�����Ԫ�ص����ݳ�Աֵ*//*������ɸ���һ��ѭ��*/
    return 0;
}
