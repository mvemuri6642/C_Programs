#include<stdio.h>
void main(){
	int m,n;
	printf("enter m and n:");
	scanf("%d %d",&m,&n);
	int top=0,bottom=n,left=0,right=m,a[m][n],i,j,d=1;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	while(top<bottom && left<right){
		for(i=right-1;i>=left;i--){
			a[top][i]=d++;
		}
		top++;
		for(i=top;i<bottom;i++){
			a[i][left]=d++;
		}
		left++;
		for(i=left;i<right;i++){
			a[bottom-1][i]=d++;
		}
		bottom--;
		for(i=bottom-1;i>=top;i--){
			a[i][right-1]=d++;
		}
		right--;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
