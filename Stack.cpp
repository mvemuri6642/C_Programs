#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int stack[max],top=-1,n,i;
void push();
void pop();
void display();
main()
{
	int ch;
	while(1)
	{
		printf("\nenter choice");
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : push();
			printf("new stack is:");
			display();
			break;
			case 2 : pop();
			printf("after pop:");
			display();
			break;
			case 3 : display();
			break;
			case 4 : exit(0);
		}
	}
}
void push()
{
	if(top==max-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter element\n");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		printf("%d is inserted\n");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflow\n");
	}
	else
	{
		n=stack[top];
		top--;
		printf("deleted element is %d\n",n);
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
		
	}
	else
	{
		for(i=top;i>-1;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}
