#include<iostream>
using namespace std;
class XYZ;
class ABC;
void add_object();
class ABC
{
	int x;
	public:
		void accept()
		{
			cout<<"enter the number class ABC"<<endl;
			cin>>x;
		}
		friend void add_object(ABC obj1 , XYZ obj2);
};
class XYZ
{
	int x;
	public:
		void accept()
		{
			cout<<"number number for XYZ"<<endl;
			cin>>x;
			int x2=x;
		}
		friend void add_object(ABC obj1,XYZ obj2);
};
void add_object (ABC obj1, XYZ obj2)
{
cout<<"Add Object :"<<obj1.x+obj2.x<<endl;
	
}
int main()
{
	ABC p;
	XYZ q;
	p.accept();
	q.accept();
	add_object(p,q);
}
