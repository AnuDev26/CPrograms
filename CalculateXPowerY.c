main()
{
	int x,y,power=1,i;
	printf("Enter value of X and Y:");
	scanf("%d%d",&x,&y);
	for(i=0;i<y;i++)
	power=power*x;
	printf("Power is %d ",power);
	
}
