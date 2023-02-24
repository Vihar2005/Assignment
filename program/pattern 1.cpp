#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter number of rows : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;++i)
	{
		for(j=0;j<=i;++j)
		{
			printf("*",j);
		}
		printf("\n");
	}
}
