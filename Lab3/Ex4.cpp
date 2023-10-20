#include<iostream>
using namespace std;

int main()
{double a=1,b=1,n,c=1,x;
cout<<"请输入一个正整数以确定e的精度"<<endl;
cin>>n;
cout<<"请输入x以确定e^x中的x"<<endl;
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