/*#include<iostream>
#include<string>
using namespace std;

class Employee{
public:
	string data1;
	string data2;
	int data3;
	void setinformation(string firstName, string lastName, int salary)//setinformation为每个人的所有信息的set函数
	{   data1 = firstName;
		data2 = lastName;
		data3 = salary;
	}

	string getinformation1()
	{return data1;
	}
	string getinformation2()
	{return data2;
	}
	int getinformation3()
	{return data3;
	}
};
int main()
{   string firstName;
	string lastName;
	int salary;
	Employee Information;
	cout << "Please enter the firstname. " << endl;
	cin >> firstName;
	cout << "Please enter the lastname. " << endl;
	cin >> lastName;
	cout << "Please enter the salary " << endl;
	cin >> salary;

	Information.setinformation(firstName,lastName,salary);
	cout <<"Employee1:" << Information.getinformation1() << " " << Information.getinformation2() << "; Yearly Salary:"<<Information.getinformation3() << endl;

	system("pause");

	return 0;
}*/