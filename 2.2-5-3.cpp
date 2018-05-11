#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if (num>20||num<1)
    {
        cout<<"number error.\n";
        return 0;
    }
    int count_positive=0,count_negative=0;
    int *arr = new int[20];
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
        if (arr[i]>0)   count_positive++;
        if (arr[i]<0)   count_negative++;
    }
    delete []arr;
    cout<<"There are "<<num<<" figures,\n";
    cout<<count_positive<<" of them are positive numbers,\n";
    cout<<count_negative<<" of them are negatives.\n";
    return 0;
}
