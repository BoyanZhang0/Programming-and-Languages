/*#include<iostream>
using namespace std;

int gcd(int x, int y)
{
	if (y > x)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}//����x��y��ֵ���Ա�֤x>y

	if (y == 0) return y;
	else if (x % y == 0)return y;
	else gcd(y, x%y);

}
int main()
{
	int x, y;
	cout << "������������x��y���Լ��������������Լ��" << endl;
	cin >> x >> y;

	cout << "�����������Լ��Ϊ" << gcd(x, y) << endl;

	system("pause");

	return 0;
}*/