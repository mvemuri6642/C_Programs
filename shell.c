#include<stdio.h>
main(){
	int a[100],i,n,t,distance,interchange;
	printf("enter size of the array:");
	scanf("%d",&n);
	printf("enter elements of the array:");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		}
		distance=n;
		do{
			distance=distance/2;
			do{
				interchange=0;
				i=1;
				while(i+distance<=n){
					if(a[i]>a[i+distance]){
						t=a[i];
						a[i]=a[i+distance];
						a[i+distance]=t;
						interchange=1;
					}
					i++;
				}
			}while(interchange!=0);
		}while(distance!=1);
		printf("\n sorted array is:");
		for(i=1;i<=n;i++){
			printf("%d\n",a[i]);
		}	
	}
