/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	
	srand((unsigned)time(0));

	int a[3][5] = {};

	//�����������3*5��������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) a[i][j] = rand();
	}

	//��ӡ�������������ԭ����
	cout << "ԭ����Ϊ��" << endl;
	for (int m = 0; m < 3; m++)
	{
		for (int n = 0; n < 5; n++) cout << a[m][n] << "\t";
		cout << endl;
	}

	//���������ת��
	int b[5][3] = {};
	int*p = a[0];
	for (int i=0; i < 5 ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			b[i][j] = *(p + 5 * j + i);
		}

	}

	//��ӡת�ú������
	cout<<"ת�ú������Ϊ��" << endl;
	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 3; n++) cout << b[m][n] << "\t";
		cout << endl;
	}

	system("pause");

	return 0;
}*/