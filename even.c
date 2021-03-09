#include<stdio.h>
int main(){
int n=7,mid,i,j,p,min,temp;

if(n%2==0){
	mid=n/2;
	p=mid;
}
else{
	mid=(n/2)+1;
	p=mid-1;
}
int a[mid],b[mid];
for(i=0;i<mid;i++){
	scanf("%d",&a[i]);
	if(n%2==0){
		scanf("%d",&b[i]);
	}
	else{
		if(i!=mid-1){
			scanf("%d",&b[i]);
		}
	}
}


for(i=0;i<p-1;i++){
	for(j=i+1;j<p;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}


for(i=0;i<p-1;i++){
	for(j=i+1;j<p;j++){
		if(b[i]<b[j]){
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
	}
}




for(i=0;i<mid;i++){
	printf("%d ",a[i]);
	printf("%d ",b[i]);
}


}
