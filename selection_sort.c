#include<stdlib.h>
#include<stdio.h>
void menu();
void insert();
void display();
void selection_sort();
int n=0,a[20];
int main()
{
	while(1)
		menu();
	
}
void menu()
{
	int ch;
	printf("\n-----------menu-----------\n1.Insert\n2.Selection_sort\n3.Display\n4.Exit");
	printf("\nchoice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert();
		       break;
		case 2:selection_sort();
		       break;
		case 3:display();
		       break;
		case 4:exit(1);
		       break;
		default:
		       printf("\ninvalid");
	}
}
void insert()
{
	int i;
	printf("\nEnter the n");
	scanf("%d",&n);
	if(n>20)
	{
		printf("\n invalid");
	}
	else
	{
	for(i=0;i<n;i++)
	{
		printf("\nentre the element=%d",i+1);
		scanf("%d",&a[i]);
	}
	}
}
void display()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("  %d  ",a[i]);
	}
}
void selection_sort()
{
	int i,j,min,m;
	for(i=0 ; i<n-1 ; i++)
		
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}

		}
		m=a[i];
		a[i]=a[min];
		a[min]=m;
	}
}


