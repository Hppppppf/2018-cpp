#include<iostream>
using namespace std;
class Cube
{
private:
    int a,b,c;
public:
    Cube(int x=3,int y=2,int z=1)
    {
        a=x;
        b=y;
        c=z;
        return;
    }
    int Compute()
    {
        return a*b*c;
    }
};
int main()
{
	int l,w,h;
	cout<<"输入立方体的长宽高："<<endl;
	cin>>l>>w>>h;
	Cube A(l,w,h);
	Cube B;
	cout<<A.Compute()<<endl;
	cout<<B.Compute()<<endl;
}
