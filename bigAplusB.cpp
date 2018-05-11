#include <string>
#include<string.h>
#include <iostream>
#define MAX_NUM 2000
using namespace std;
int add1[MAX_NUM]={0},add2[MAX_NUM]={0},res[MAX_NUM]={0},tmp;
char tmp1[MAX_NUM]={0},tmp2[MAX_NUM]={0};
int N;
int main() {
    cin>>N;
    int  count = 0;
    tmp = 0;
    while (count < N) {

        cin>>tmp1>>tmp2;

        int len1 = strlen(tmp1);
        int len2 = strlen(tmp2);

        for (int i = len1-1,k = 0; i >= 0; --i,++k) {
            add1[k] = tmp1[i] - '0';

        }

        for (int i = len2-1,k = 0; i >= 0; --i,++k) {
            add2[k] = tmp2[i] - '0';

        }

        if (len1 >= len2) {
            for (int i = 0; i <= len1; ++i) {
                res[i] = (add1[i] + add2[i] + tmp) % 10;
                tmp = (add1[i] + add2[i] + tmp) / 10;
            }

        }else if (len1 < len2) {
            for (int i = 0; i <= len2; ++i) {
                res[i] = (add1[i] + add2[i] + tmp) % 10;
                tmp = (add1[i] + add2[i] + tmp) / 10;
            }
        }

        int len = 0;
        len=len1 >= len2?len1:len2;
        cout<<"Case "<<(count+1)<<":\n"<<tmp1<<" + "<<tmp2<<" = ";
        if (!res[len]) cout<<res[len];
        for (int i = len-1; i >= 0; --i) {
            cout<<res[i];
        }
        cout<<"\n";
        if (count != N-1) {
            cout<<"\n";
        }
        count++;
    }

}
