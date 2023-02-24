#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=i;k>0;k--)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
