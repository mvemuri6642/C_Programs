int main()
{
	
	/*
	//half pyramid
	int i,j,n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	*/
	/*
	//inverted half pyramid
	int i,j,n=5;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	*/
	//floyd's triangle
	int i,j,n=4,number=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
}

