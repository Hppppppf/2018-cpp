#include<iostream>
using namespace std;

class Stu
{
public:
    string name;
    int score;
//private:
    Stu(string str1,int i)
    {
        name = str1;
        score = i;
    }
};

class Tea
{
public:
    string name;
    string pro;
//private:
    Tea(string str1,string str2)
    {
        name = str1;
        pro = str2;
    }
};
void print(Stu ,Tea);

int main()
{
	char stuname[20],teaname[20],teapro[20];
	cout<<"请输入学生姓名："<<endl;
	cin>>stuname;
	cout<<"请输入教师姓名："<<endl;
	cin>>teaname;
	cout<<"请输入教师职称："<<endl;
	cin>>teapro;
	Stu student(stuname,88);
	Tea teacher(teaname,teapro);
	print(student,teacher);
	return 0;
}

void print(Stu S,Tea T)
{
    cout<<"student's name:"<<S.name<<"   "<<S.score<<endl;
	cout<<"Teacher's name:"<<T.name<<"   "<<T.pro<<endl;
}
