/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Manohar
 *
 * Created on October 30, 2019, 6:20 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define item int
#include<conio.h>
#include<ctype.h>

/*LINKED LIST INSERT AT FRONT*/

/*typedef struct lnode{
    item data;
    struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertfront(lptr first,int x);
void writelist(lptr first);
int main() {
    lptr first=NULL;
    item x;
    printf("enter elements terminate with 0");
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        first=insertfront(first,x);
    }
    printf("constructed linked list:");
    writelist(first);
}
lptr insertfront(lptr first,item x){
    lptr p,t;
    p=(lptr)malloc(sizeof(struct lnode));
    if(p==NULL){
        printf("no space is available:");
        exit(1);
    }
    p->data=x;
    p->link=first;
    return p;
}
void writelist(lptr first){
    lptr t;
    if(first==NULL)
        return;
    t=first;
    while(t->link!=NULL){
        printf("%d->",t->data);
        t=t->link;
    }
    printf("%d->",t->data);
}
 */



/*LINKED LIST INSERTION AT THE END*/
/*typedef struct lnode{
    item data;
    struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertend(lptr first,int x);
void writelist(lptr first);
int main() {
    lptr first=NULL;
    item x;
    printf("enter elements terminate with 0");
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        first=insertend(first,x);
    }
    printf("constructed linked list:");
    writelist(first);
}
lptr insertend(lptr first,item x){
    lptr p,t;
    p=(lptr)malloc(sizeof(struct lnode));
    if(p==NULL){
        printf("no space is available:");
        exit(1);
    }
    p->data=x;
    p->link=NULL;
    if(first==NULL)
        return p;
    t=first;
    while(t->link!=NULL){
        t=t->link;
    }
     t->link=p;
        return first;
}
void writelist(lptr first){
    lptr t;
    if(first==NULL)
        return;
    t=first;
    while(t->link!=NULL){
        printf("%d->",t->data);
        t=t->link;
    }
    printf("%d->",t->data);
}
*/



/*CIRCULAR LINKED LIST*/
/*typedef struct lnode{
    item data;
    struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertend(lptr first,int x);
void writelist(lptr first);
int main() {
    lptr first=NULL;
    item x;
    printf("enter elements terminate with 0");
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        first=insertend(first,x);
    }
    printf("constructed linked list:");
    writelist(first);
}
lptr insertend(lptr first,item x){
    lptr p,t;
    p=(lptr)malloc(sizeof(struct lnode));
    if(p==NULL){
        printf("no space is available:");
        exit(1);
    }
    p->data=x;
    p->link=NULL;
    if(first==NULL){
        p->link=p;
        return p;
    }
    t=first;
    while(t->link!=first){
        t=t->link;
    }
     t->link=p;
     p->link=first;
        return first;
}
void writelist(lptr first){
    lptr t;
    if(first==NULL)
        return;
    t=first;
    while(t->link!=first){
        printf("%d->",t->data);
        t=t->link;
    }
    printf("%d->",t->data);
}
*/


/*DOUBLE LINKED LIST*/
/*typedef struct lnode{
    item data;
    struct lnode *llink;
    struct lnode *rlink;
};
typedef struct lnode *lptr;
lptr insertend(lptr first,int x);
void writelist(lptr first);
int main() {
    lptr first=NULL;
    item x;
    printf("enter elements terminate with 0");
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        first=insertend(first,x);
    }
    printf("constructed linked list:");
    writelist(first);
}
lptr insertend(lptr first,item x){
    lptr p,t;
    p=(lptr)malloc(sizeof(struct lnode));
    if(p==NULL){
        printf("no space is available:");
        exit(1);
    }
    p->data=x;
    p->llink=p->rlink=NULL;
    if(first==NULL){
        return p;
    }
    t=first;
    while(t->rlink!=NULL){
        t=t->rlink;
    }
     t->rlink=p;
     p->llink=t;
        return first;
}
void writelist(lptr first){
    lptr t;
    if(first==NULL)
        return;
    t=first;
    while(t->rlink!=NULL){
        printf("%d->",t->data);
        t=t->rlink;
    }
    printf("%d->",t->data);
}
*/

/*DELETING A NODE*/

/*typedef struct lnode{
    item data;
    struct lnode *link;
};
typedef struct lnode *lptr;
lptr insertend(lptr first,int x);
void writelist(lptr first);
lptr delete(lptr first,item x);
int main() {
    lptr first=NULL;
    item x;
    printf("enter elements terminate with 0");
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        first=insertend(first,x);
    }
    printf("constructed linked list:");
    writelist(first);
    printf("enter the data value to be deleted:");
    scanf("%d",&x);
    first=delete(first,x);
    printf("linked list after deleting a node:");
    writelist(first);
}
lptr insertend(lptr first,item x){
    lptr p,t;
    p=(lptr)malloc(sizeof(struct lnode));
    if(p==NULL){
        printf("no space is available:");
        exit(1);
    }
    p->data=x;
    p->link=NULL;
    if(first==NULL)
        return p;
    t=first;
    while(t->link!=NULL){
        t=t->link;
    }
     t->link=p;
        return first;
}
void writelist(lptr first){
    lptr t;
    if(first==NULL)
        return;
    t=first;
    while(t->link!=NULL){
        printf("%d->",t->data);
        t=t->link;
    }
    printf("%d->",t->data);
}
lptr delete(lptr first,item x){
    lptr prev,t;
    if(first==NULL){
        printf("empty list cannot be deleted");
        exit(1);
    }
    if(x==first->data){
        first=first->link;
        return first;
    }
    t=first;
    while((t!=NULL)&&(t->data!=x)){
        prev=t;
        t=t->link;
    }
    prev->link=t->link;
    return first;
}
 */
