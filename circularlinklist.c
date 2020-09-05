#include<stdlib.h>
#include<stdio.h>
void insert();
void show();
void menu();
void in_any();
void del();
struct student 
{
int info;
struct student *next;
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
printf("\nmenu\n1.insert\n2.show\n3.in_any\n4.delete\n5.exit");
printf("enter ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:show();
break;
case 3:in_any();
break;
case 4:del();
break;
case 5:exit(1);
break;
default:printf("\ninvalid");
}
}
void insert()
{
struct student *last,*temp;
last=start;
printf("\nenter the ");
temp=(struct student *)malloc(sizeof(struct student));
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
start=temp;
temp->next=start;
}
else 
{
while(last->next!=start)
{
last=last->next;
}
last->next=temp;
temp->next=start;
}
}
void show()
{
struct student *last;
last=start;
if(last==NULL)
{
printf("\nempty");
return;
}
else
{
while(last->next!=start)
{
printf("  %d  ",last->info);
last=last->next;
}
printf("%d  %d ",last->info  , start->info);
}
}
void in_any()
{
struct student *temp,*last,*store;
last=start;
int i, pos;
temp=(struct student* )malloc(sizeof(struct student));
temp->next=NULL;
scanf("%d",&temp->info);
printf("\nenter position");
scanf("%d",&pos);
if(pos==1)
{
temp->next=start;
last=start;
while(last->next!=start)
{
last=last->next;
}
last->next=temp;
start=temp;
}
else
{
last=start;
for(i=1;i<=pos-2;i++)
{
last=last->next;
if(last==start)
{
printf("\n position invalid");
return;
}
}
store=last->next;
last->next=temp;
temp->next=store;
}
}
void del()
{
struct student *last,*store;
int i,pos;
last=start;
printf("\n enter position");
scanf("%d",&pos);
if(pos==1)
{
store=last->next;
while(last->next!=start)
{
last=last->next;
}
last->next=store;
start=store;
}
else
{
last=start;
for(i=1;i<=pos-2;i++)
{
last=last->next;
if(last==start)
{
printf("\n invalid position");
return;
}
}
store=last->next;
last->next=store->next;
}

}
