#include<iostream>
using namespace std;

int PrimeNumber(int num)
{
	int x = 0;
	int y;//y作为输出值
	for (int n=2; n < num; n++)
	{
		if (num % n == 0) x += n;
	}
	if (x == 0)
	{
		cout << num << "\t";
		y = 1;
	}
	else y = 0;
	return y;

}
int main()
{
	int i = 0;//i用于统计素数的个数
	int j = 0;//j用于制表
	int k = 0;//用于判断j的值是否变化
	cout << "The prime numbers from 1 to 10000 are :" << endl;
	for (int a = 2; a < 10000; a++) {
		i+=PrimeNumber(a);
		j = i;
		if (k == j)continue;
		else{
			if (j % 10 == 0) cout << endl;
			k = j;
		}
	}
	cout <<endl<< "Total of " << i << " prime number between 1 to 10000. ";

	system("pause");
	return 0;
}