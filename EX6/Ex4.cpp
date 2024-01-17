#include<iostream>
#include<string>
using namespace std;

template <class T>
void TwoSmallest(T a, T b, T c, T& s1, T& s2,int t)
{
		s1 = a;//最小的值
		s2 = a;//第二小的值
		T biggest = a;
		if (b < s1) s1 = b;
		if (c < s1) s1 = c;
		if (b > biggest) biggest = b;
		if (c > biggest) biggest = c;
		if (b< biggest && b>s1) s2=b;
		if (c< biggest && c>s1) s2 = c;

		cout << "The smallest number is " << s1 << endl;
		cout << "The second smallest number is " << s2 << endl;

}

int main()
{
	int t = 0;
	cout << "请输入需要比较的三个值的类型，int型为1，double型为2，char型为3，string型为4" << endl;
	cin >> t;
	if (t == 1) {
		int x, y, z;
		int m, n;
		cout << "请输入所需要比较的第一个值" << endl;
		cin >> x;
		cout << "请输入所需要比较的第二个值" << endl;
		cin >> y;
		cout << "请输入所需要比较的第三个值" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}
	if (t == 2) {
		double x, y, z;
		double m, n;
		cout << "请输入所需要比较的第一个值" << endl;
		cin >> x;
		cout << "请输入所需要比较的第二个值" << endl;
		cin >> y;
		cout << "请输入所需要比较的第三个值" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}

	if (t == 3) 
	{
		char x, y, z;
		char m, n;
		cout << "请输入所需要比较的第一个值" << endl;
		cin >> x;
		cout << "请输入所需要比较的第二个值" << endl;
		cin >> y;
		cout << "请输入所需要比较的第三个值" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}
	if (t == 4)
	{
		string x, y, z;
		string m, n;
		cout << "请输入所需要比较的第一个值" << endl;
		cin >> x;
		cout << "请输入所需要比较的第二个值" << endl;
		cin >> y;
		cout << "请输入所需要比较的第三个值" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}

	system("pause");

	return 0;
}