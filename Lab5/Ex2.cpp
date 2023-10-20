/*#include<iostream>
using namespace std;

void isperfect(int num)
{
	int x = 0;
	for (int n = 1; n < num; n++)
	{
		if (num % n == 0) x += n;
	}
	if (num == x) {cout<<num<<"=1";		
	for (int m = 2; m < num; m++)
		{
		if (num % m == 0)cout << "+"<<m;
		}
	cout << endl;
    }

}

int main()
{
	for (int a = 1; a <= 1000; a++) isperfect(a);


	system("pause");
	return 0;
}*/