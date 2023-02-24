#include<stdio.h>
main()
{
	int i,n,sum=0;
	
	printf("enter value of \n ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}printf("sum of %d=%d",n,sum);
}
