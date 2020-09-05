#include<iostream>
using namespace std;
class business;
class employed;
void income_tax(employed x, business);
class employed
{
	private:
	int income;
	public:
		void accept()
		{
			cout<<"\nincome of employed "<<endl;
			cin>>income;
		}
		friend void income_tax(employed x, business y);
};
class business
{
	int income;
	public:
	void accept()
	{
		cout<<"\nincome of business man"<<endl;
		cin>>income;
	}
	friend void income_tax(employed x,business y);
};
void income_tax(employed x,business y)
{
	if(x.income<=200000)
	{
		cout<<"No tax for employed";
	}
	else
	{
		cout<<"\nincome tax employed:"<<(x.income*10)/100<<endl;
	}
	
	if(y.income<=200000)
	{
		cout<<"no tax for business man";
	}
	else
	{
		cout<<"\nincome tax business man :"<<(y.income*10)/100<<endl;
	}
}
int main()
{
	employed e;
	business b;
	e.accept();
	b.accept();
	income_tax(e,b);
	return 0; 
	
}
