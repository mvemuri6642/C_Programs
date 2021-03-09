#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct doubly{
	int x;
	struct doubly *next;
	struct doubly *prev;
};

typedef struct doubly *dptr;
struct doubly *head=0,*tail;
int main(){
	int ch;
	
	while(1){
		printf("enter choice:");
		scanf("%d",&ch);
		switch(ch){
		case 1 : create();
				 break;
		case 2 : display();
				 break;
		case 3 : exit(0);
			 	 break;
	}
		
	}
	
	
}
void create(){
	struct doubly *p;
	p=(dptr)malloc(sizeof(struct doubly));
	printf("enter n:\n");
	scanf("%d",&p->x);
	if(head==NULL){
		head=tail=p;
		head->next=head;
		head->prev=head;
	}
	else{
		tail->next=p;
		p->prev=tail;
		p->next=head;
		head->prev=p;
		tail=p;
	}
}

/*
void display(){
	struct doubly *temp;
	temp=head;
	if(head==NULL){
		printf("empty");
	}
	else{
		while(temp!=tail){
			printf("<-(%d)->",temp->x);
			temp=temp->next;
		}
		printf("<-(%d)->",temp->x);
		printf("\n<-(%d)->",temp->next->x);
		
	}
}
*/



void display(){
	struct doubly *temp;
	temp=tail;
	if(head==NULL){
		printf("empty");
	}
	else{
		while(temp!=head){
			printf("<-(%d)->",temp->x);
			temp=temp->prev;
		}
		printf("<-(%d)->",temp->x);
		printf("\n<-(%d)->",temp->prev->x);
		
	}
}
