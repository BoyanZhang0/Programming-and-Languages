#include<iostream>
using namespace std;

int main()
{
cout<<"The Twelve days of Christmas"<<endl<<endl;

for(int a=1;a<=12;a++)
{
	switch(a)
	{case 1:cout<<"On the first day of Christmas"<<endl;break;
	 case 2:cout<<"On the second day of Christmas"<<endl;break;
     case 3:cout<<"On the third day of Christmas"<<endl;break;
	 case 4:cout<<"On the fourth day of Christmas"<<endl;break;
	 case 5:cout<<"On the fifth day of Christmas"<<endl;break;
	 case 6:cout<<"On the sixth day of Christmas"<<endl;break;
	 case 7:cout<<"On the seventh day of Christmas"<<endl;break;
	 case 8:cout<<"On the eighth day of Christmas"<<endl;break;
     case 9:cout<<"On the ninth day of Christmas"<<endl;break;
	 case 10:cout<<"On the tenth day of Christmas"<<endl;break;
	 case 11:cout<<"On the eleventh day of Christmas"<<endl;break;
	 case 12:cout<<"On the twelfth day of Christmas"<<endl;break;
	
	}

	cout<<"my true love sent to me"<<endl;

	switch(a)
	{
	case 12: cout<<"Twelve Drummers Drumming"<<endl;
	case 11:cout<<"Eleven Pipers Piping"<<endl;
    case 10:cout<<"Ten Lords a Leaping"<<endl;
	case 9:cout<<"Nine Ladies Dancing"<<endl;
	case 8:cout<<"Eight Maids a Milking"<<endl;
	case 7:cout<<"Seven Swans a Swimming"<<endl;
	case 6:cout<<"Six Geese a Laying"<<endl;
	case 5:cout<<"Five Golden Rings"<<endl;
	case 4:cout<<"Four Calling Birds"<<endl;
	case 3:cout<<"Three French Hens"<<endl;
    case 2:cout<<"Two Turtle Doves"<<endl<<"and ";
	case 1:cout<<"a Partridge in a Pear Tree"<<endl<<endl;
	}
}
system("pause");

return 0;
}