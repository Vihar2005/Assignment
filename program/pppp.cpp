#include<stdio.h>
main()
{
    int i, j, k, n=4;

    for(i=1; i<=n; i++)
	{
        for(j=n-i; j>0; j--)
		{
            printf(" ");
        }
        for(k=1; k<=i; k++)
		{
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
	{
        for(j=n-i; j>0; j--)
		{
            printf(" ");
        }
        for(k=1; k<=i; k++)
		{
            printf("*");
        }
        printf("\n");
    }
}

