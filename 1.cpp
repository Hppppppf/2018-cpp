#include<iostream>

using namespace std;
#define MAX_NUM 1000

int main()
{
	int n,p;    //人数和比例
    int i, j;   //循环参数
	//输入人数
	cout << "请输入人数：" << endl;
	cin >> n;

	//输入比例
	double Food[MAX_NUM];
	cout << "请输入偷吃百分比："  <<endl;

	cin >> p;
	//比例判断
	if (p > 100 || p < 1)
		cout << "比例不符合输入要求！" << endl;

	else
	{

		cout << "请输入每个人的食物量，回车表示输入一个完毕" << endl;
	//将食物输入
		for (i = 0; i < n; i++)

		{

			cin >> Food[i];

		}

		for (i = 0; i < n; i++)

		{

			for (j = 0; j < n - 1 - i; j++)//先传进来的食物被偷吃次数为n-1次
		{
			Food[i] = Food[i] * (1 - p*0.01);
		}
	}

		cout << "重新分配的食物为：" << endl;
		for (i = 0; i < n; i++)

		{

			cout << Food[i] << " ，";

		}

		cout << endl<< endl;

		double Max = 0.0;
		for (i = 0; i < n; i++)
		{
			if (Food[i] > Max)
			{
				Max = Food[i];
			}

		}
		cout << "盘子里最多的那份有：" << Max << endl;
	}
	return 0;
}
