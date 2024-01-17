/*#include<iostream>
using namespace std;

int main()
{
	int a[20] = {};
	cout << "Please Enter 20 integers between 10 and 100 :" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> a[i];
		for (int h = 0; h < i; h++)
		{
			if (a[i] == a[h]) a[i] = 0;//重复数字以0的形式储存在数组中

		}
	}

	cout << "The nonduplicate values are:" << endl;
	for (int m = 0; m < 20; m++)
	{
		if (a[m] == 0) continue;//用于防止重复数字以0的形式被输出
		cout << a[m] << " ";
	}

	system("pause");

	return 0;
}*/