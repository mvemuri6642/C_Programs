#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=5,min,temp,i,j,k=3;
	int arr[5]={10,6,5,2,1};
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
	
