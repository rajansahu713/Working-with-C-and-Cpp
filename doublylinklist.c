#include<stdio.h>
#include<stdlib.h>
void menu();
void insert();
void show();
void del();
void in_any();
void rev();
struct student
{
int info;
struct student *next,*pre;
};
struct student *start=NULL;
int main()
{
while(1)
menu();
}
void menu()
{
int ch;
printf("\n menu\n1.insert\n2.show\n3.delete\n4.in_any\n5.reverse\n6.Exit");
printf("\nchoice");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:show();
break;
case 3:del();
break;
case 4:in_any();
break;
case 5:rev();
break;
case 6:exit(1);
break;
default:printf("\ninvalid");
}
}
	void insert()
	{
		struct student *temp,*last;
		temp=(struct student*)malloc(sizeof(struct student));
		scanf("%d",&temp->info);
		temp->next=temp->pre=NULL;
		if(start==NULL)
		{
			start=temp;
			return;
		}	
		else
		{	
			last=start;
			while(last->next!=NULL)
			{
			last=last->next;
			}
			last->next=temp;
			temp->pre=last;
		}
	}
	void show()
	{
	struct student *t;
	t=start;
	if(start==NULL)
	{
	printf("\nempty");
	return;
	}
	else
	t=start;
	while(t!=NULL)
	{
	printf("   %d   ",t->info);
	t=t->next;
	}
	}
	void del()
	{
	struct student *part,*t,*last;
	int pos,i;
	part=start;
	last=start;
	printf("\n enter the postion");
	scanf("%d",&pos);
	if(pos==1)
{
if(part->next==NULL)
{
free(part);
part=NULL;
return;
}
else
t=part->next;
t->pre=NULL;
start=t;
part=NULL;
free(part);
return;
}
else
last=start;
{
for(i=1;i<=pos-2;i++)
{
last=last->next;
}
if(last->next->next==NULL)
{
last->next->pre=NULL;
last->next=NULL;
return;
}
else
last->next=last->next->next;
last->next->pre=last;
}
}
void in_any()
{
struct student *temp,*last,*store;
last=start;;
int i,pos;
temp=(struct student*)malloc(sizeof(struct student));
printf("\nenter the number");
scanf("%d",&temp->info);
printf("\n enter the pos");
scanf("%d",&pos);
if(pos==1)
{
temp->next=last;
last->pre=temp;
start=temp;
return;
}
else
last=start;
{
for(i=1;i<=pos-2;i++)
{
last=last->next;
}
store=last->next;
last->next=temp;
temp->pre=last;
temp->next=store;
}
}
void rev()
{
struct student *last,*store;
last=start;
while(last->next!=NULL)
{
last=last->next;
}
store=last;
while(store!=NULL)
{
printf("  %d  ",store->info);
store=store->pre;
}
}
