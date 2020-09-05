#include<iostream>
using namespace std;
class student
{
	int roll ,marks;
	public:
		void display()
		{
			cout<<"construct 1 is called"<<endl;
		}
		student(int x,int y)
	{
		roll=x;
		marks=y;
		cout<<"roll="<< roll<<"and marks="<<marks<<endl;
	}
	
};
int main()
{
	student p(1,6);
	p.display();
	return 0 ;
}
