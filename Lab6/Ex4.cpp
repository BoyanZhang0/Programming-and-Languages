#include<iostream>
#include<string>
using namespace std;

template <class T>
void TwoSmallest(T a, T b, T c, T& s1, T& s2,int t)
{
		s1 = a;//��С��ֵ
		s2 = a;//�ڶ�С��ֵ
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
	cout << "��������Ҫ�Ƚϵ�����ֵ�����ͣ�int��Ϊ1��double��Ϊ2��char��Ϊ3��string��Ϊ4" << endl;
	cin >> t;
	if (t == 1) {
		int x, y, z;
		int m, n;
		cout << "����������Ҫ�Ƚϵĵ�һ��ֵ" << endl;
		cin >> x;
		cout << "����������Ҫ�Ƚϵĵڶ���ֵ" << endl;
		cin >> y;
		cout << "����������Ҫ�Ƚϵĵ�����ֵ" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}
	if (t == 2) {
		double x, y, z;
		double m, n;
		cout << "����������Ҫ�Ƚϵĵ�һ��ֵ" << endl;
		cin >> x;
		cout << "����������Ҫ�Ƚϵĵڶ���ֵ" << endl;
		cin >> y;
		cout << "����������Ҫ�Ƚϵĵ�����ֵ" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}

	if (t == 3) 
	{
		char x, y, z;
		char m, n;
		cout << "����������Ҫ�Ƚϵĵ�һ��ֵ" << endl;
		cin >> x;
		cout << "����������Ҫ�Ƚϵĵڶ���ֵ" << endl;
		cin >> y;
		cout << "����������Ҫ�Ƚϵĵ�����ֵ" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}
	if (t == 4)
	{
		string x, y, z;
		string m, n;
		cout << "����������Ҫ�Ƚϵĵ�һ��ֵ" << endl;
		cin >> x;
		cout << "����������Ҫ�Ƚϵĵڶ���ֵ" << endl;
		cin >> y;
		cout << "����������Ҫ�Ƚϵĵ�����ֵ" << endl;
		cin >> z;
		TwoSmallest(x, y, z, m, n, t);
	}

	system("pause");

	return 0;
}