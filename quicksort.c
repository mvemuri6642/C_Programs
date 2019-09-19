#define MAXINT 32767
#include<stdio.h>
void quicksort(int a[],int si,int ei);
main(){
	int a[100],i,j,n,key;
	printf("enter size of an array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	a[n+1]=MAXINT;
	quicksort(a,1,n);
	printf("in sorted array is:");
	for(i=1;i<=n;i++){
		printf("%d",a[i]);
	}
}
void quicksort(int a[],int si,int ei){
	int j;
	if(si<ei){
		j=partition(a,si,ei+1);
		quicksort(a,si,j-1);
		quicksort(a,j+1,ei);
	}
}
int partition(int a[],int p,int q){
	int i,j,key,t;
	key=a[p];
	j=q;
	i=p;
	do{
		do{
			i++;
		}while(a[i]<key);
		do{
			j--;
		}while(a[j]>key);
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}while(i<j);
	t=a[p];
	a[p]=a[j];
	a[j]=t;
	return j;
}
