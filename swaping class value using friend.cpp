#include<iostream>
using namespace std;
class B;
class A
{
	int value;
	public:
	void accept(int x)
	{
		value=x;
	}
	void disp()
	{
		cout<<"A  "<< value<<endl;
	}
	friend void exchange(class A &a,class B &b);
};
class B
{
	int value1;
	public:
		void accept(int y)
		{
		value1=y;	
		}
	void disp()
	{
		cout<<"B  "<<value1<<endl;
	}
	friend void exchange(class A &a,class B &b);
};
void exchange(class A &a,class B &b)
{
	int temp=a.value;
	a.value=b.value1;
	b.value1=temp;
}
int main()
{
	A p;
	B q;
	p.accept(100);
	q.accept(200);
	cout<<"\nvalue before exchange  :"<<endl;
	p.disp();
	q.disp();
	exchange(p,q);
	cout<<"\nvalue after exchange :"<<endl;
	p.disp();
	q.disp();
	return 0;
}
