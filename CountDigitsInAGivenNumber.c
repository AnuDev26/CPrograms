main()
{
	int N,r,count=0;
	printf("Enter a number:");
	scanf("%d",&N);
	while(N!=0)
	{
		r=N%10;
		count=count+1;
		N/=10;
	}
	printf("The number of digits in the given number is %d ",count);
}
