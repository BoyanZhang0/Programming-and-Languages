#include<iostream>
#include<string>
using namespace std;

class Data {
public:
	int num1;
	int num2;
	int num3;

	void setdata(int year, int month, int day)
	{   num1 = year;
		num2 = month;
		num3 = day;
	}

	int getdata1()
	{return num1;
	}
	int getdata2()
	{return num2;
	}
	int getdata3()
	{return num3;
	}
};

int main()
{
	int year;
	int month;
	int a;//用于判断月份真确与否
	int day;
	Data mydata;
	cout << "Please enter year." << endl;
	cin >> year;
	cout << "Please enter month" << endl;
	cin >> a;
	if ((a >= 1) && (a <= 12)) month = a;
	else month = 1;
	cout << "Please enter day" << endl;
	cin >> day;

	mydata.setdata(year, month, day);
	cout<< mydata.getdata1()<<"/"<<mydata.getdata2()<<"/ "<<mydata.getdata3()<< endl;

	system("pause");

	return 0;
}