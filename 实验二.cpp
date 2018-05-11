#include<iostream>
using namespace std;
class Girl;
class Boy
{
private:
    char *name;
    int age;
public:
    friend class Girl;
    friend void VisitBoyGirl(Boy&,Girl&);

    Boy(char *str="Boy_Name",int year=0)
    {
        name = str;
        age = year;
    }
    ~Boy()
    {

    }
    void PrintBoy()
    {
        cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
    }
    void VisitGirl(Girl & obj);
};

class Girl
{
private:
    char *name;
    int age;
public:
    friend void Boy::VisitGirl(Girl & obj);
    friend void VisitBoyGirl(Boy&,Girl&);

    Girl(char *str="Girl_Name",int year=0)
    {
            name = str;
            age = year;
    }
    ~Girl()
    {

    }
    void PrintGirl()
    {
        cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
    }
    void VisitBoy(Boy & obj)
    {
        cout<<"Boy's name :"<<obj.name<<endl<<"His age:"<<obj.age<<endl;
    }
};
void Boy::VisitGirl(Girl & obj)
{
        cout<<"Girl's name :"<<obj.name<<endl<<"Her age:"<<obj.age<<endl;
}
void VisitBoyGirl(Boy&,Girl&);
int main()
{
    Girl girl("DouDou",18);
    Boy boy("YangYang",22);
    girl.PrintGirl();
    boy.PrintBoy();
    girl.VisitBoy(boy);
    boy.VisitGirl(girl);
    VisitBoyGirl(boy,girl);
    return 0;
}
void VisitBoyGirl(Boy&obj1,Girl&obj2)
{
    cout<<"Boy:\nName:"<<obj1.name<<"\nAge:"<<obj1.age<<"\nGirl:\nName:"<<obj2.name<<"\nAge:"<<obj2.age<<endl;
}
