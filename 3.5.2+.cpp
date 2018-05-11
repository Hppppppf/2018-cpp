#include<iostream>
using namespace std;

class juxing
{
protected:
    float length;
    float width;
public:
    juxing(float a,float b)
    {
        length=a;
        width=b;
    }
    float area()
    {
        return length*width;
    }
    void disp()
    {
        cout<<area();
    }
};

class changfangti:public juxing
{
private:
    float height;
public:
    changfangti(float a,float b,float h):juxing(a,b)
    {
        height=h;
    }
    float clav()
    {
        return height*area();
    }
    void disp()
    {
        cout<<clav();
    }
};

int main()
{
    float a,b,h;
    cin>>a>>b>>h;
    changfangti aa(a,b,h);
    cout<<aa.area()<<" "<<aa.clav()<<endl;
    return 0;
}
