#include<iostream>
using namespace std;

int main()
{double a=1,b=1,n,c=1,x;
cout<<"������һ����������ȷ��e�ľ���"<<endl;
cin>>n;
cout<<"������x��ȷ��e^x�е�x"<<endl;
cin>>x;
//if(n!=0)
//{while(n!=0)
//   {
//	   a=a*n;
//	   n=--n;
//
//   }
//cout<<a<<endl;
//}
//else cout<<0<<endl;
while(a<=n){
	b=b*(x/a);
	a=++a;
	c+=b;


}
cout<<c<<endl;
system("pause");

return 0;
}