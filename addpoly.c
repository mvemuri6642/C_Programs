#include<stdio.h>
#include<stdlib.h>
struct polynode{
	double coeff;
	int power;
	struct polynode *link;
};typedef struct polynode *polyptr;
polyptr readpoly();
void writepoly(polyptr first);
polyptr insertend(polyptr first,double coeff,int power);
polyptr addpoly(polyptr p1,polyptr p2);
polyptr polymult(polyptr p1,polyptr p2);
main(){
	polyptr p1,p2,p3;
	double root;
	p1=readpoly();
	printf("\n First Polynomial");
	writepoly(p1);
	p2=readpoly();
	printf("\n Second Polynomial");
	writepoly(p2);
	p3=addpoly(p1,p2);
	printf("Addition of Second Polynomial:");
	writepoly(p3);
}
polyptr readpoly(){
	polyptr first=NULL;
	double c;
	int p;
	printf("enter coeff and power in increasing order of power:");
	scanf("%lf%d",&c,&p);
	while(c!=0){
		first=insertend(first,c,p);
		printf("enter coeff and power and terminate with 0,0");
		scanf("%lf%d",&c,&p);
	}
	return first;
}
void writepoly(polyptr first){
	polyptr t;
	if(first==NULL){
		return;
	}
	t=first;
	while(t->link!=NULL){
		printf("%lf*x^%dt",t->coeff,t->power);
		t=t->link;
	}
	printf("%lf*x^%d",t->coeff,t->power);
}
polyptr insertend(polyptr first,double coeff,int power){
	polyptr p,t;
	p=(polyptr)malloc(sizeof(struct polynode));
	if(p==NULL){
		printf("no space is available:");
		exit(1);
	}
	p->coeff=coeff;
	p->power=power;
	p->link=NULL;
	if(first=NULL){
		return p;
	}
	t=first;
	while(t->link!=NULL){
		t=t->link;
	}
	t->link=p;
	return first;
}
polyptr addpoly(polyptr p1,polyptr p2){
	double x;
	polyptr t1,t2,p3=NULL;
	t1=p1;
	t2=p2;
	while(t1!=NULL&&t2!=NULL){
		if(t1->power<t2->power){
			p3=insertend(p3,t1->coeff,t1->power);
			t1=t1->link;
		}
		else if(t1->power>t2->power){
			p3=insertend(p3,t2->coeff,t2->power);
			t2=t2->link;
		}
		else{
			x=t1->coeff+t2->coeff;
			if(x!=0){
				p3=insertend(p3,x,t1->power);
			}
			t1=t1->link;
			t2=t2->link;
		}
		if(t1==NULL){
			while(t2!=NULL){
				p3=insertend(p3,t2->coeff,t2->power);
				t2=t2->link;
			}
		}
		else{
			while(t1!=NULL){
				p3=insertend(p3,t1->coeff,t1->power);
				t1=t1->link;
			}
		
		}	
		return p3;	
	}
		
}

