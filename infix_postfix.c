#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define item char
#define max 100
item s[max];
int top;
void push(item x);
item pop();
int isp(item x);
int icp(item x);
item stacktop();
int main()
{
	char exp[100],ch;
	int i=0;
	top=-1;
	push('#');
	printf("enter expression:");
	gets(exp);
	while(exp[i]!='\0')
	{
		if(isalnum(exp[i]))
		{
			putchar(exp[i]);
		}
		else if(isoperator(exp[i]))
		{
			while(isp(stacktop())>icp(exp[i]))
			{
				ch=pop();
				putchar(ch);
			}
			push(exp[i]);
		}
		else if(exp[i]=='()')
		{
			push('(');
		}
		else
		{
			while(stacktop()!='(')
			{
				ch=pop();
				putchar(ch);
			}
			ch=pop();
		}
		i++;
	}
	while(top!=0)
	{
		ch=pop();
		putchar(ch);
	}
}
void push(item x)
{
	if(top==max-1)
	{
		printf("overflow");
	}
	else
	{
		s[top]=x;
		top++;
	}
}
item pop()
{
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		x=s[top];
		top--;
	}
}














