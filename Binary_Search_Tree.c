/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binary_Search_Tree.c
 * Author: Manohar
 *
 * Created on August 21, 2019, 9:19 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#define item int
struct treenode{
    struct treenode *lchild;
    item data;
    struct treenode *rchild;
};typedef struct treenode *tptr;
tptr insert(tptr root,item x);
void inorder(tptr root);
void preorder(tptr root);
void postorder(tptr root);
int main() {

    tptr root=NULL;
    item x;
    printf("enter non zero elements:");
    scanf("%d",&x);
    while(x!=0){
        root=insert(root,x);
        scanf("%d",&x);
    }
    printf("the constructor inorder binary tree:");
    inorder(root);
    printf("the constructor preorder binary tree:");
    preorder(root);
    printf("the constructor postorder binary tree:");
    postorder(root);
}
tptr insert(tptr root,item x){
    tptr p,t,parent;
    p=(tptr)malloc(sizeof(struct treenode));
    p->data=x;
    p->lchild=p->rchild=NULL;
    if(root==NULL){
        return p;
    }
    t=root;
    while(t!=NULL){
        parent=t;
        if(x<t->data){
            t=t->lchild;
        }
        else if(x>t->data){
            t=t->rchild;
        }
        else{
            printf("duplicate node");
            free(p);
            return root;
        }
    }
    if(x<parent->data){
        parent->lchild=p;
        return root;
    }
    else{
        parent->rchild=p;
        return root;
    }
}
void inorder(tptr root){
    if(root!=NULL){
        inorder(root->lchild);
        printf("%d\t\n",root->data);
        inorder(root->rchild);
    }
}
void postorder(tptr root){
    if(root!=NULL){
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d\t\n",root->data);
    }
}
void preorder(tptr root){
    if(root!=NULL){
        printf("%d\t\n",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

