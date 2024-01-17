/*#include<iostream>
using namespace std;

int gcd(int x, int y)
{
	if (y > x)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}//交换x，y的值，以保证x>y

	if (y == 0) return y;
	else if (x % y == 0)return y;
	else gcd(y, x%y);

}
int main()
{
	int x, y;
	cout << "请输入两个数x，y，以计算两个数的最大公约数" << endl;
	cin >> x >> y;

	cout << "两个数的最大公约数为" << gcd(x, y) << endl;

	system("pause");

	return 0;
}*/