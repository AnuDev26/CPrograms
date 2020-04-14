main()
{
	int i,product=1,N;
	printf("Enter value of N:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	product=product*i;
	printf("Product is %d ",product);
}
