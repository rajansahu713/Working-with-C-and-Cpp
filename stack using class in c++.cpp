#include<iostream>
#define maxsize 5
void menu();
int top=-1;
int arr[maxsize];
using namespace std;
class stack
{
	int item;
	public:
		void insert()
		{
			if(top==maxsize-1)
			{
				printf("\nstack is full");
				return;
			}
			else
			{
				cout<<"\nenter the number"<<endl;
				cin>>item;
				top++;
				arr[top]=item;
			}
		}
		void del()
		{
			if(top==-1)
			{
				cout<<"empty"<<endl;
				return;
			}
			else
			cout<<"delete no is="<<arr[top]<<endl;
			top--;
		}
		void disp()
		{
			if(top==-1)
			{
				cout<<"empty"<<endl;
				return;
			}
			else
			{
				for(int i=0;i<=top;i++)
				{
					cout<<arr[i]<<endl;
				}
			}
		}
};
int main()
{
	while(1)
	menu();
}
void menu()
{
	 stack  p;
	 int ch;
	 cout<<"\n ----------menu  -----------\n1.inset\n2.del\n3.show\n4.exit"<<endl;
	 cout<<"\n choice"<<endl;
	 cin>>ch;
	 switch(ch)
	 {
	case 1:p.insert();
	break;
	case 2:p.del();
	break;
	case 3:p.disp();
	break;
	default:cout<<"invalid opt"<<endl;
}
}
