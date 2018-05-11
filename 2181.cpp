#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class qi
{
public:
    long x,y;
};
bool judge(qi,qi);
int main()
{
    qi qizi[200000];
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>qizi[i].x>>qizi[i].y;
    int ret=0;
    for (int j=0;j<n;j++)
    {
        for (int k=j;k<n;k++)
        {
            if (k==j)   continue;
            if (judge(qizi[j],qizi[k]))
            {
                ret++;
                cout<<"True:"<<qizi[j].x<<','<<qizi[j].y<<' '<<qizi[k].x<<','<<qizi[k].y<<endl;
            }
        }

    }
    cout<<ret<<endl;
    return 0;

}
bool judge(qi a,qi b)
{
    if (fabs(((fabs(a.x-b.x))+fabs(a.y-b.y))-sqrt(double((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))))<1E-3)
        return true;
    else
    {
       cout<<"false:"<<a.x<<','<<a.y<<' '<<b.x<<','<<b.y<<endl;
        return false;
    }

}
