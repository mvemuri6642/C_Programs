#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define n 5
int s1[n],s2[n];
int top1=-1,top2=-1;
int count=0;
void enqueue(int x);
void dequeue();
int pop1();
int pop2();
void push1(int data1);
void push2(int data2);
void display();

int main()
{
	int ch,x;
	while(1)
	{
		printf("\nEnter choice:");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("\n1.Enqueue:");
					 printf("\nEnter element to enter into queue:");
					 scanf("%d",&x);
					 enqueue(x);
					 printf("\nNew Queue is:");
					 display();
					 break;
			case 2 : printf("\n2.Dequeue:");
					 dequeue();
					 printf("\nAfter pop new queue is:");
					 display();
					 break;
			case 3 : printf("\n3.Dispaly\n");
					 display();
					 break;
			case 4 : exit(0);
		}
	}
}

void enqueue(int x)
{
	push1(x);
	count++;
}
void dequeue()
{
	int i,j;
	if(top1==-1 && top2==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		for(i=0;i<count;i++)
		{
			int a=pop1();
			push2(a);
		}
		int b=pop2();
		printf("\nElement deleted from queue is: %d",b);
		count--;
		for(j=0;j<count;j++)
		{
			int a=pop2();
			push1(a);
		}
	}
}
int pop1()
{
	return s1[top1--];
}
int pop2()
{
	return s2[top2--];
}
void push1(int data1)
{
	if(top1==n-1)
	{
		printf("\noverflow");
	}
	else
	{
		top1++;
		s1[top1]=data1;
		
	}
}
void push2(int data2)
{
	if(top2==n-1)
	{
		printf("\noverflow");
	}
	else
	{
		top2++;
		s2[top2]=data2;
	}
}

void display()
{
	int i;
	if(top1==-1)
	{
		printf("\nqueue is empty");
	}
	else
	{
		for(i=0;i<=top1;i++)
		{
			printf("%d ",s1[i]);
		}
	}
}






















