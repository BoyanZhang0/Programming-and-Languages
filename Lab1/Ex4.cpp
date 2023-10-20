#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int number;
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;

	cout << "Enter a five-digit integer:";
	cin >> number;

	number1 = number % 10000;
	number2 = (number - number1 * 10000) % 1000;
	number3 = (number - number1 * 10000 - number2 * 1000) % 100;
	number4 = (number - number1 * 10000 - number2 * 1000 - number3 * 100) % 10;
	number5 = number - number1 * 10000 - number2 * 1000 - number3 * 100 - number4 * 10;

	cout << number1 << printf() << number2 << printf() << number3 << printf() << number4 << printf() << number5 << endl
		system("pause");

	return 0;
}