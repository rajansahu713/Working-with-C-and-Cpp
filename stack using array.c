#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int stack[MAXSIZE];
void menu();
void push();
void pop();
void show();
top=-1;
int main()
{
while(1)
menu ();
}
void menu()
{
int ch;
printf("\n------------------------- menu--------------------------- \n1. push \n2. pop \n3. show \n4. exit");
printf("\n choise you operation");
scanf("%d",&ch);
switch (ch) 
{
case 1:  push();
break ;
case 2:  pop();
break ;
case 3:  show();
break ;
case 4: exit(1);
default : printf("\nwrong input ");
}
}
void push()
{
int item;
if (top==MAXSIZE-1)
{
printf("\n stack is full");
}
else
{
top++;
printf("\n enter the  number ");
scanf("%d",&item);
stack[top]=item;
printf("\n %d is push into the stack",item);
}
}
void pop()
{
int x;
if(top==-1)
{
printf("\n stack is empty ");
}
else
{
x=stack[top];
top--;
printf("%d is pop from stack",x);
}
}
void show()
{
int i;
for (i=top;i>=0;i--)
{
printf("\n%d",stack[i]);
}
}



