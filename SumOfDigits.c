main()
{
	int i,N,r,sum=0;
	printf("Enter a number:");
	scanf("%d",&N);
	while(N!=0)
	{
		r=N%10;
		sum=sum+r;
		N/=10;
	}
	printf("The sum of digits of the given number is %d ",sum);
}
