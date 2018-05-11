#include<iostream>
using namespace std;
int main()
{
    cout<<"please input 10 int numbers:";
    int *arr = new int[10];
    int count_positive=0,count_negative=0;
    for (int i=0;i<10;i++)
    {
        cin>>arr[i];
        if (arr[i]>0)   count_positive++;
        if (arr[i]<0)   count_negative++;
    }
    delete []arr;
    cout<<"positive="<<count_positive<<";negative="<<count_negative<<"\n";
    return 0;
}
