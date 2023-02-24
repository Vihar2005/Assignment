#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter value of n : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			printf(" ");
		}
		printf("* ");
	}
}
