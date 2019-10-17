#include <stdio.h>
#include <stdlib.h>
int a[200],cap=200,top=-1;
void push(int x)
{
	if(top<cap)
	{
		a[++top]=x;
		printf("Element entered successfully\n\n");
	}
	else
	printf("Stack Overflow....\n\n");
}
int pop()
{
	if(top==-1)
	{printf("Stack Underflow\n\n");
	return(-909);}
	else
	return(a[top--]);
}
void display()
{
	int i;
	if(top==-1)
	printf("The stack is empty...");
	else
	{
	printf("The elements in the stack are as follows:\n\n");
	for(i=top;i>=0;i--)
	{
		printf("%d>%d\n",i+1,a[i]);
	}
}
	printf("\n\n");
}

