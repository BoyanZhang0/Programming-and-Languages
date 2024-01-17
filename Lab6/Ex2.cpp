/*#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << "请输入需要求得的斐波那契数的个数（从0开始）" << endl;
	cin >> n;


		if (n == 0)cout << "fibonacci(0)=0" << endl;
		else if (n == 1) {
			cout << "fibonacci(0)=0" << endl;
			cout << "fibonacci(1)=1" << endl;
		}
		else if (n > 1) {
			cout << "fibonacci(0)=0" << endl;
			cout << "fibonacci(1)=1" << endl;
			int t = 0, a = 0, b = 1;
			for (int I = 2; I <= n; I++)
			{
				t = a + b;
				a = b;
				b = t;
				cout << "fibonacci(" << I << ")=" << t << endl;
			}

		}
	system("pause");

	return 0;
}*/