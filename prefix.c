#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define maxsize 100
#define item int
item s[maxsize];
int top;
void addstack(int);
int deletestack();
void main()
{
	char exp[100];
	int op1,op2,result,i,l;
	top=0;
	printf("enter expression:");
	gets(exp);
	l=strlen(exp);
	i=l-1;
	while(i>=0){
		if(isdigit(exp[i])){
			addstack(exp[i]-'0');
		}
		else{
			switch(exp[i]){
				case '+' : op1=deletestack();
						 op2=deletestack();
						 result=op1+op2;
						 break;
				case '-' : op1=deletestack();
						 op2=deletestack();
						 result=op1-op2;
						 break;
				case '*' : op1=deletestack();
						 op2=deletestack();
						 result=op1*op2;
						 break;
				case '/' : op1=deletestack();
						 op2=deletestack();
						 result=op1/op2;
						 break;
				case '^' : op1=deletestack();
						 op2=deletestack();
						 result=op1^op2;
						 break;
				
			}
			addstack(result);
		}
		
		i--;
		
	}
	if(top<1){
		printf("error");
		
	}
	else{
		printf("result is: %d\n",deletestack());
	}
	
}

void addstack(int x){
	if(top==maxsize-1){
		printf("overflow");
		
	}
	else{
		top++;
		s[top]=x;
	}
}


int deletestack(){
	int x;
	if(top==-1){
		printf("error");
	}
	else{
		x=s[top];
		top--;
		return x;
	}
}










