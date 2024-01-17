/*#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned)time(0));
	int x[11] = {};//用于统计各个结果的出现次数
	int X[11] = {};//用于计算理论概率
	for (int z=0;z<36000000;z++)
	{
		int m = rand() % 6+1;
		int n = rand() % 6+1;
		int p = m + n;
		x[p - 2]++;
	}//统计实际投掷的值

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			X[i + j - 2]++;
		}
	}

	cout << "当投掷36000000次时的结果" << endl;
	cout << "\tSUM\tTotal\tExpected\tActual" << endl;

	for (int y = 0; y < 11; y++)
	{
		double ExpectedValue = X[y]/0.36;
		double ActualValue =x[y]/360000.0;
		cout << "\t" << y + 2 << "\t" << x[y] << "\t"<< ExpectedValue <<"%" << "\t" << ActualValue << "%" << endl;
	}
	system("pause");

	return 0;
}*/