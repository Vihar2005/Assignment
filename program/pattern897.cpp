#include<stdio.h>
main()
{
	int i,j,k,n;
	
	printf("enter value of n");
	scanf("%d",&n);
	
	for(i=n;i>=1;--i)
	{
		for(k=1;k<=n-i;++k)
		{
			printf(" ");
		}
		for(j=1;j<=i;++j)
		{
			printf(" *");
		}
		printf("\n");
	}
}