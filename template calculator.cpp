#include<iostream>
using namespace std;
template<class T>class calculator
{
	private:
		T num1,num2;
		public:
			calculator(T a,T b)
			{
				num1=a;
				num2=b;
			}
			T add()
			{
				return(num1+num2);
			}
			T subtract()
			{
				return(num1-num2);
			}
			T mul()
			{
				return(num1*num2);
			}
			T div()
			{
				return(num1/num2);
			}
			void disp()
			{
				cout<<"add :"<< add() <<endl;
				cout<<"subtract:"<<subtract()<<endl;
				cout<<"mul :"<< mul() <<endl;
				cout<<"div :"<< div() <<endl;
			}
};
int main()
{
	calculator<int>intcalc(2,1);
	calculator<float>floatcalc(3.2,5.7);
	intcalc.disp();
	floatcalc.disp();
	return 0;
}
