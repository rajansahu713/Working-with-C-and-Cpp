#include<iostream>
using namespace std;
class student
{
	char name[100];
	int roll,marks;
	public:
	void accept()
	{   
	cout<<"\nenter name roll and marks"<<endl;
		cin>>name;
		cin>>roll>>marks;
	}
	friend void display(student x);
};
void display(student x)
{
cout<<"\nName :"<<x.name<<endl;	
cout<<"\nRoll :"<<x.roll<<endl;
cout<<"\nMarks :"<<x.marks<<endl; 		
}
int main()
{
	student p;
	p.accept();
	display(p);
	return 0;
}
