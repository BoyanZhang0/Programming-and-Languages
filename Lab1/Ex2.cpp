#include<iostream>//allow program to input and output

using std::cout;//program uses cout
using std::endl;//program uses endl
using std::cin;//program uses cin

int main() 
{
int number1;
int number2;
int number3;
int smallest;
int largest;

	cout<< "Input three different integers:";

	cout<<"������number1��ֵ";
	cin>>number1;
	cout<<"������number2��ֵ";
	cin>>number2;
	cout<<"������number3��ֵ";
	cin>>number3;

	largest=number1;
	if(number2>largest)
	{
	largest=number2;
	}
	if(number3>largest)
	{
	largest=number3;
	}
	smallest=number1;
	if(number2<smallest)
	{
	smallest=number1;
	}
	if(number3<smallest)
	{
	smallest=number3;
	}
	cout<<"sum="<<number1+number2+number3<<endl;
	cout<<"average="<<(number1+number2+number3)/3<<endl;
	cout<<"product="<<number1*number2*number3<<endl;
	cout<<"largest="<<largest<<endl;
	cout<<"smallest="<<smallest<<endl;
	system("pause");
	return 0;

}