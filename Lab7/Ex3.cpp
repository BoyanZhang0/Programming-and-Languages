/*#include<iostream>
using namespace std;

int main()
{
	int a[10] = {};
	cout << "请输入十个数，以对其进行冒泡升序排序" << endl;
	for (int i = 0; i < 10; i++) cin>>a[i];

	for (int j = 9 ; j >= 0; j--)
	{
		for (int n = j - 1; n >= 0; n--)
		{
			int t = 0;//用于交换顺序
			if (a[j] < a[n]) t = a[j], a[j] = a[n], a[n] = t;
		}
	}




	cout << "重新排列的数组为";
	for (int h = 0; h < 10; h++)
	{
		cout << a[h]<<" ";
	}
	system("pause");

	return 0;
}*/