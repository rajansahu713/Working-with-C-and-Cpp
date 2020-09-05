#include<stdio.h>
#include<stdlib.h>
#define max 14
int rear1=-1;
int front1=-1;
int rear2=max;
int front2=max;
int s[max],i,x,choise;
void enqueue();
void dequeue();
void display();
int menu();
int main()
{
	while(1)
	menu();
}
int menu()
{
	printf("\nchoice the operation");
	printf("\n1. enqueue\n2. dequeue \n3. display\n4.exit");
	printf("\n enter your choice");
	scanf("%d",&choise);
	switch(choise)
	{
	case 1:enqueue();
	break;
	case 2:dequeue();
	break ;
	case 3:display();
	break;
	case 4:exit(1);
	break;
	default: printf ("\n wrong input ");
	}
}
void enqueue()
{
	if(rear1==max-1)
	{
	printf("\n the queue is full");
	}
	else
	{
	printf("\n choice option \n1.enqueue1\n2. enqueue ");
	scanf("%d",&choise);
	printf("\n enter the element you wish so insert");
	scanf("%d",&x);
	if(choise==1)
	{
	rear1++;
	s[rear1]=x;
	}	
	if(front1==-1)
	{
	front1=0;
	}
	if(choise==2)
	{
	rear2--;	
	s[rear2]=x;
	}
	if(front2==max)
	{
	front2=max-1;
	}
	}
}
void dequeue()
{
	if(front1==rear1==-1|| front2==rear2==max)
	printf("\n the queue is empty");
	printf("\n enter 1 to delete from queue and 2 to delete from queue2");
	scanf("%d",&choise);
	if(choise==1)
	{
		 if(rear1==-1)
		 {
		  printf("\nqueue 1 is empty");
		}
		else
		{
		printf("\n delete element is %d", s[front1]);
		if(front1==rear1)
		front1=rear1=-1;
		else
		front1=front1+1;
		}
	}

	if(choise==2)
	{
		if(rear2==max)
		{
		 printf("\nQueue2 is empty");
		return;
		}
		else
		{
		printf("\n delete element is %d",s[front2]);
		
		if(front2==rear2)
		front2=rear2=max;
		else 
		front2=front2-1;

		}
	}
}		
void display()
{
	if(front1==rear1==-1 && front2==rear2==max)
	{
	 printf("\nThe queue is empty");
	}
	else{
		if(rear1==-1)
		printf("\n the queue1 is empty");
		else
		{
	
		printf("\nelement is the queue1 are");
		for(i=front1;i<=rear1;i++)
		printf("      %d      ",s[i] );
	
		}
	
		if(rear2==max)
		{
		printf("\n the queue2 is empty");
		}
		else
		{
		printf("\nelement in the queue2 are");
		for(i=front2;i>=rear2;i--)
		printf("     %d    ",s[i]);
		}
	}
}
