#include<iostream>
using namespace std;

int main()
{
	int a[1000] = {};
	for (int i = 0; i < 1000; i++) a[i] = 1;

	for (int i = 2; i < 1000; i++)
	{
		for (int j = i+1; j < 1000; j++) 
		{
			if (j % i == 0) a[j] = 0;
		}
	}

	int k = 0, n = 0;//k,n用于换行制表

	for (int m = 2; m < 1000; m++)
	{
		if (a[m] == 1)
		{
			cout << m << "\t";
			n++;
		}

		if (k + 1 == n && n % 8 == 0) cout << endl;

		k = n;
	}
	system("pause");

	return 0;
}