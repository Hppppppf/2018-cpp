#include<iostream>

using namespace std;
#define MAX_NUM 1000

int main()
{
	int n,p;    //�����ͱ���
    int i, j;   //ѭ������
	//��������
	cout << "������������" << endl;
	cin >> n;

	//�������
	double Food[MAX_NUM];
	cout << "������͵�԰ٷֱȣ�"  <<endl;

	cin >> p;
	//�����ж�
	if (p > 100 || p < 1)
		cout << "��������������Ҫ��" << endl;

	else
	{

		cout << "������ÿ���˵�ʳ�������س���ʾ����һ�����" << endl;
	//��ʳ������
		for (i = 0; i < n; i++)

		{

			cin >> Food[i];

		}

		for (i = 0; i < n; i++)

		{

			for (j = 0; j < n - 1 - i; j++)//�ȴ�������ʳ�ﱻ͵�Դ���Ϊn-1��
		{
			Food[i] = Food[i] * (1 - p*0.01);
		}
	}

		cout << "���·����ʳ��Ϊ��" << endl;
		for (i = 0; i < n; i++)

		{

			cout << Food[i] << " ��";

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
		cout << "�����������Ƿ��У�" << Max << endl;
	}
	return 0;
}
