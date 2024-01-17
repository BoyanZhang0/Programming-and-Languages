/*#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	
	srand((unsigned)time(0));

	int a[3][5] = {};

	//将随机数输入3*5的数组中
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++) a[i][j] = rand();
	}

	//打印输入了随机数的原数组
	cout << "原数组为：" << endl;
	for (int m = 0; m < 3; m++)
	{
		for (int n = 0; n < 5; n++) cout << a[m][n] << "\t";
		cout << endl;
	}

	//对数组进行转置
	int b[5][3] = {};
	int*p = a[0];
	for (int i=0; i < 5 ; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			b[i][j] = *(p + 5 * j + i);
		}

	}

	//打印转置后的数组
	cout<<"转置后的数组为：" << endl;
	for (int m = 0; m < 5; m++)
	{
		for (int n = 0; n < 3; n++) cout << b[m][n] << "\t";
		cout << endl;
	}

	system("pause");

	return 0;
}*/