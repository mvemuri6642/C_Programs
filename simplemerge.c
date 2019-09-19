#include<stdio.h>
main(){
	int a[100],b[100],c[200],m,n,i,j,k;
	printf("enter no.of elements in A:");
	scanf("%d",&m);
	printf("enter no.of elements in B:");
	scanf("%d",&n);
	printf("enter %d elements in the A:",m);
	for(i=1;i<=m;i++){
		scanf("%d",&a[i]);
	}
	printf("enter %d elements in the B:",n);
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	i=1;j=1;k=1;
	while(i<=m&&j<=n){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<=m){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=n){
		c[k]=b[j];
		j++;
		k++;
	}
	printf("sorted array c is:\n");
	for(i=1;i<=m+n;i++){
		printf("%d\t",c[i]);
	}
}
