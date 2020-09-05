#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
int stack[maxsize];
void push1();
void push2();
void pop1 ();
void pop2 ();
void disp1();
void menu();
void disp2();
int top1=-1;
int top2=maxsize;
int i;
int main ()
{
while(1)
menu();
}
void menu()
{
int ch;
printf("\n ----------------------Menu------------------------ \n 1. Push1 \n2. push 2\n3. pop1 \n4. pop2\n5. disp1 \n6 disp2 \n7. exit ");
printf("\n choise the option");
scanf("%d",&ch);
switch(ch)
{
case 1:push1();
break;
case 2: push2();
break ;
case 3: pop1();
break ;
case 4: pop2();
break ;
case 5: disp1();
break ;
case 6: disp2();
break ;
case 7: exit(1);
break; 
default:printf("\nwrong input");  

}
}
void push1()
{
int item;
if(top1==top2-1)
{
printf("stack is full ");
}
top1=top1+ 1;
printf("\n enter the number ");
scanf("%d",&item);
stack[top1]=item;
}
void push2()
{
int item;
if(top2==top1+1)
{
printf("\n stack is full");
}
else 
{
top2--;
printf("\nenter the number");
scanf("%d",&item);
stack[top2]=item;
}
}
void pop1()
{
int x;
if(top1==-1)
{
printf("\n empty ");
}
else
{

x=stack[top1];
printf("%d is pop from the stack",x);
top1--;
}
}
void pop2()
{
int y ;
if(top2==maxsize)
{
printf(" stack is full");
}
else
{
y=stack[top2];
printf("%d is pop from the stack",stack[top2]);
top2++;
}
} 
void disp1()
{ 
int i;
if (top1==-1)
{
printf("\n empty");
}
else
{
for( i=0;i<=top1;i++)
{
printf("\n\n%d",stack[i]);
}
}
}
void disp2()
{
int i;
if(top2==maxsize)
{
printf("\n empty");
}
else 
{
for(i=top2;i<maxsize;i++)
{
printf("\n%d",stack[i]);
}
}
}
