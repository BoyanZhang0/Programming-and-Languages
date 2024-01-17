/*#include<iostream>
#include<cstring>
using namespace std;

bool paren_check(char* exp)
{
	int a = 0, b = 0;
	for (int i = 0; *(exp+i)!='\0'; i++)
	{
		//中英文括号都能别识别
		if (*(exp+i)== '('|| *(exp + i) == '（') a++;
		if (*(exp+i)== ')'|| *(exp + i) == '）') b++;
	}
	if (a==b) return 1;
	else if(a!=b) return 0;
}

int main()
{
	char str1[100];
	char* exp=str1 ;
	cout << "请输入一个带有多个括号的字符串" << endl;
	cin>>str1;
	cout << paren_check(exp) << endl;

	system("pause");

	return 0;
}*/