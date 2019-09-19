#include<stdio.h>
main(){
	int a[100],i,j,n,t;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	msort(a,1,n);
	printf("elements in sorted array are:");
	for(i=1;i<=n;i++){
		printf("%d",a[i]);
	}
}
void msort(int a[],int si,int ei){
	int mi;
	if(si<ei){
		mi=(si+ei)/2;
		msort(a,si,mi);
		msort(a,mi+1,ei);
		merge(a,si,mi,ei);
	}
}
void merge(int a[],int si,int mi,int ei){
	int i,j,k,k1;
	int b[11];
	i=si;j=mi+1;k=si;
	while(i<=mi&&j<=ei){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
			k++;
		}
		else{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mi){
		for(k1=j;k1<=ei;k1++){
			b[k]=a[k1];
			k++;
		}
	}
	else{
		for(k1=i;k1<=mi;k1++){
			b[k]=a[k1];
			k++;
		}
	}
for(k1=si;k1<=ei;k1++){
	a[k1]=b[k1];
}	
}
