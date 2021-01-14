#include<stdio.h>
int main()
{
	int m,n,i,j,temp,a,b;
	printf("enter no of rows:");
	scanf("%d",&m);
	printf("enter no of columns:");
	scanf("%d",&n);
	int arr[m][n],t[m][n],x[m][n],y[m][n];
	printf("enter a matrix:");
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			x[i][j]=arr[i][j];
		}
	}
	for(i=2,a=0;i>=0;a++,i--){
		for(j=0,b=0;j<=3;b++,j++){
			t[j][i]=arr[a][b];
		}
	}
	for(i=2,a=0;i>=0;a++,i--){
		for(j=0,b=0;j<=3;b++,j++){
			arr[j][i]=t[a][b];
		}
	}
	for(i=2,a=0;i>=0;a++,i--){
		for(j=0,b=0;j<=3;b++,j++){
			t[j][i]=arr[a][b];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			y[j][i]=x[i][j];
		}
	}
	printf("\n90_rotated_matrix:\n");
	for(j=0;j<n;j++){
		for(i=0;i<m/2;i++){
			temp=y[i][j];
			y[i][j]=y[m-1-i][j];
			y[m-1-i][j]=temp;
		}
	}
	for(i=0;i<=m-1;i++){
		for(j=0;j<=n-1;j++){
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
}



