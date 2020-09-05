#include<iostream>
using namespace std;
class calc
{
	int n1,n2;
	public:
		void accept()
		{
			cin>>n1>>n2;
		}
		void display()
		{
			cout<<"n1="<<n1<<"n2="<<n2<<endl;
		}
		void operator + (calc x)
		{
			n1=n1+x.n1;
			n2=n2+x.n2;
		}
		void operator +(int x)
		{
			n1=n1+x;
			n2=n2+x;
		}
		 void operator +(calc p)
		{
			calc temp;
			temp n1=n1+p.n1;
			temp n2=n2+p.n2;
			return temp;
		}
};
int main()
{
	calc a,b,e;
	b.accept();
	a+b;
	a.display();
	a+10;
	a.display();
	e=a+b;
	e.display();
}
