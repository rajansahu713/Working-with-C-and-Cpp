#include<iostream>
using namespace std;
#define maxsize 6
int front=-1,rear=-1,arr[maxsize];
void menu();
class queue
{
	int item;
	public:
		void insert()
		{
			if(rear==maxsize-1)
			{
				cout<<"\nqueue is full"<<endl;
				return;
			}
		else
		{
			cout<<"enter the number"<<endl;
			cin>>item;
			rear++;
			arr[rear]=item;
			front=0;
		}
	}
	void del()
	{
		if(rear==-1)
		{
			cout<<"\n empty"<<endl;
			return;
		}
	else
	{
		cout<<"delete no="<<arr[front]<<endl;
		front++;
		rear--;
	}
	}
	void show()
	{
		if(rear==-1)
		{
			cout<<"\nempty"<<endl;
			return;
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<arr[i] ;
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
	queue p;
	int ch;
	cout<<"\n-----menu-------\n1.insert\n2.del\n3.show\n4.exit"<<endl;
	cout<<"choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:p.insert();
		break;
		case 2:p.del();
		break;
		case 3:p.show();
		break;
		case 4:exit(1);
		break;
		default: 
		cout<<"invalid";
	}
}	
