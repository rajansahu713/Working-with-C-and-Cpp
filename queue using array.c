#include<stdio.h>
#define MAXSIZE 4
int q[MAXSIZE];
void menu();
void enqueue();
void dequeue();
void show();
int rear=-1;
int front=-1;
int main()
{
while(1)
menu();
}
void menu()
{
int ch;
printf("\n menu \n1 enqueue \n2 dequeue \n3 show \n4 exit");
scanf("%d",&ch);
switch(ch)
{
case 1: enqueue();
break ;
case 2: dequeue();
break ;
case 3: show();
break ;
case 4: exit(1);
break ;
default : printf("\nwrong input");
}
}
void enqueue()
{
int item ;
if( rear==MAXSIZE-1)
{
printf("\nqueue is full");

}
else
{
rear=rear+1;
printf("\n enter the number");
scanf("%d",&item);
q[rear]=item;
if(front=-1)
{
front=front+1;
}
}
}
void dequeue()
{
if (front==-1)
{
printf("\nqueue is empty");
}
else if(front == rear)
	front=rear=-1;
else
   {

printf("\n %d dequeue from the queue",q[front]); 
	front=front+1;

}
}

void show()
{
int i;
if (front==-1)
{
printf("\nqueue is empty");
}
else
for(i=front;i<=rear;i++)
{
printf("\n %d",q[i]);
}
}



