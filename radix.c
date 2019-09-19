#include<stdlib.h>
#include<stdio.h>
typedef struct lnode{
	int data;
	struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertend(lptr first,int x);
main(){
	int a[100],i,j,n,t,no_of_digits=3,p,digit,k;
	lptr head[10];
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++){
		head[i]=NULL;
	}
	p=1;
	for(j=1;j<=no_of_digits;j++){
		for(i=1;i<=n;i++){
			digit=((a[i]/p)%10);
			head[digit]=insertend(head[digit],a[i]);
		}
			k=1;
			for(i=0;i<=9;i++){
				while(head[i]!=NULL){
					a[k++]=head[i]->data;
					head[i]=head[i]->link;
				}
			}
			p=p*10;
		}
		printf("sorted array is:\t\n");
		for(i=1;i<=n;i++){
			printf("%d",a[i]);
		}
	}

lptr insertend(lptr first,int x){
	lptr p,t;
	p=(lptr)malloc(sizeof(struct lnode));
	if(p==NULL){
		printf("no space is available");
		exit(1);
	}
	p->data=x;
	p->link=NULL;
	if(first==NULL){
		return p;
	}
	t=first;
	while(t->link!=NULL){
		t=t->link;
		t->link=p;
		return first;
	}
}
