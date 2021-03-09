#include<stdio.h>
int main()
{
	int m,n,i,j,t;
	
	printf("enter m and n values:");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i][j]=i*n+j+1;
			b[i][j]=i*n+j+1;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				t=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=t;
			}
		}
	}
	for(i=0;i<m/2;i++){
		for(j=0;j<n;j++){
			t=a[i][j];
			a[i][j]=a[m-i-1][j];
			a[m-i-1][j]=t;
		}
	}
	printf("matrix after 270\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				t=b[i][j];
				b[i][j]=b[j][i];
				b[j][i]=t;
			}
			
		}
	}
	
	for(i=0;i<m/2;i++){
		for(j=0;j<n;j++){
			t=b[i][j];
			b[i][j]=b[m-i-1][j];
			b[m-i-1][j]=t;
		}
	}
	printf("after 90 anti\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==b[i][j]){
				continue;
			}
			else{
				printf("\nNo");	
			}
		}
	}
	printf("Equal");
}





