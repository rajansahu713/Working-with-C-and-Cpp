#include<iostream>
using namespace std;
class link
{
public:	
void insert();
void menu();
void in_beg();
void del();
void show();
void in_any();
};
struct student
{
int mark;
struct student *next;
};
struct student *start=NULL;
int main()
{
link p;  
while (1)
p.menu();
}
void link::menu()
{  
int ch;
cout<<"\n----------- menu---------\n1. Isert\n2.In_beg\n3.Delete\n4.Show\n5.in_any\n6.Exit\n"<<endl;
cin>>ch;
switch(ch)
{
	link p;
case 1:p.insert();
break;
case 2:p.in_beg();
break;
case 3:p.del();
break;
case 4:p.show();
break;
case 5:p.in_any();
break;
case 6:exit(1);
break;
default: cout<<"\n wrong input"<<endl;
}
}
void link::insert()
{
struct student *temp,*last;
temp=new student;
cin>>temp->mark;
temp->next=NULL;
if(start==NULL)
{
start=temp;
}
else
{
last=start;
while(last->next!=NULL)
{
last=last->next;
}
last->next=temp;
}
}
void link::in_beg()
{
struct student *temp,*s;
s=start;
temp=new student;
scanf("%d",&temp->mark);
temp->next=NULL;
temp->next=s;
start=temp;
}
void link::del()
{
struct student *s,*t;
s=start;
int i,pos;
if(s==NULL)
{
cout<<"\n link is empty"<<endl;
}
else
{
cout<<"\nenter the position"<<endl;
cin>>pos;
if(pos==1)
{
struct student *s,*t;
t=start->next;
s=start;
s=NULL;
start=t;
}
else
{
for(i=1;i=pos-2;i++)
{
s=s->next;
}
t=s->next;
s->next=t->next;
t=NULL;
}
}
}
void link::show()
{
struct student *st;
st=start; 
if (st==NULL)
{
cout<<"\n link is empty"<<endl;
}
else
{
while(st!=NULL)
{
cout<<st->mark<<endl;
st=st->next;
}
}
}
void link::in_any()
{
int pos,i;
struct student *temp,*s,*t=NULL;
s=start;
if(start==NULL)
{
cout<<"\nlink is empty"<<endl;
}
else 
{
cout<<"\nenter the postion"<<endl;
cin>>pos;
temp=new student;
cin>>temp->mark;
temp->next=NULL;
if(pos==1)
{
temp->next=s;
s=temp;
start=s;
}
else
{ 
for(i=1;i<=pos-2;i++)
{
while(s->next!=NULL)
{
s=s->next;
}
}
t=s->next;
s->next=temp;
temp->next=t;
if(t==NULL)
{
cout<<"\n invalid opt"<<endl;
}
}
}
}

