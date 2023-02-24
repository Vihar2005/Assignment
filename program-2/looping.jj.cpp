#include<stdio.h>
main()
{
	int n,sum=0,f,l;
	
	printf("enter number : ");
	scanf("%d",&n);
	
	l=n%10;
	while (n>=10)
	{
		n = n / 10;
	}
	f=n;
	sum = f+l;
	printf("sum of first and last digit = %d",sum);
}
