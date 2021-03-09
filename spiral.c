#include<stdio.h>
int main(){
	int m,n;
	printf("enter m and n:");
	scanf("%d %d",&m,&n);
	int top=0,bottom=m,left=0,right=n,i,j,d=97;
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	while(top<bottom&&left<right){
		for(i=left;i<right;i++){
			a[top][i]=d++;
		}
		top++;
		for(i=top;i<bottom;i++){
			a[i][right-1]=d++;
		}
		right--;
		for(i=right-1;i>=left;i--){
			a[bottom-1][i]=d++;
		}
		bottom--;
		for(i=bottom-1;i>=top;i--){
			a[i][left]=d++;
		}
		left++;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
