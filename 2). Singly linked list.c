#include<stdio.h>
#include<stdlib.h>
void insert();
void menu();
void in_beg();
void delete();
void show();
void in_end();
void in_any();
struct student
{
int mark;
struct student *next;
};
struct student *start=NULL;
void main()
{  
while (1)
menu();
}
void menu()
{  
int ch;
printf("\n----------- menu---------\n1. Isert\n2.In_beg\n3.Delete\n4.Show\n5.in_end\n6.in_any\n7.Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:in_beg();
break;
case 3:delete();
break;
case 4:show();
break;
case 5:in_end();
break;
case 6:in_any();
break;
case 7:exit(1);
break;
default: printf("\n wrong input");
}
}
void insert()
{
struct student *temp,*last;
temp=(struct student *)malloc(sizeof(struct student));
scanf("%d",&temp->mark);
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
void in_beg()
{
struct student *temp,*s;
s=start;
temp=(struct student*)malloc(sizeof(struct student));
scanf("%d",&temp->mark);
temp->next=NULL;
temp->next=s;
start=temp;
}
void delete()
{
struct student *s,*t;
s=start;
int i,pos;

if(s==NULL)
{
printf("\n link is empty");
}
else
{
printf("\nenter the position");
scanf("%d",&pos);
if(pos==1)
{
struct student *s,*t;
t=start->next;
s=start;
free(s);
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
free(t);
}
}
}
void show()
{
struct student *st;
st=start; 
if (st==NULL)
{
printf("\n link is empty");
}
else
{
while(st!=NULL)
{

printf("\n%d",st->mark);
st=st->next;
}
}
}
void in_end()
{
struct student *temp,*s;
s=start;
temp=(struct student *)malloc(sizeof(struct student));
scanf("%d",&temp->mark);
while(s->next!=NULL)
{
s=s->next;
}
s->next=temp;
}
void in_any()
{
int pos,i;
struct student *temp,*s,*t;
s=start;
if(start==NULL)
{
printf("\nlink is empty");
}
 else 
{
printf("\nenter the postion");
scanf("%d",&pos);
temp=(struct student*)malloc(sizeof(struct student));
scanf("%d",&temp->mark);
temp->next=NULL;
if(pos==1)
{
temp->next=s;
s=temp;
start=s;
}
else
{ 
for(i=1;i=pos-2;i++)
{
while(s->next!=NULL)
{
s=s->next;
}
}
t=s->next;
s->next=temp;
temp->next=t;
if(s==NULL)
{
printf("\n invalid opt");
}

}
}
}
