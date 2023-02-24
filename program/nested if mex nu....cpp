#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter number a : ");
	scanf("%d",&a);
	
	printf("enter number b : ");
	scanf("%d",&b);
	
	printf("enter number c : ");
	scanf("%d",&c);
	
	if(a>=b)
	{
		if(a>=c)
		{
			printf("%d is largest number",a);
		}
		else
		{
			printf("%d is largest number",c);
		}
	}
	else
/*	{
		if(b>=c)
		{
			printf("\n%d is largest number",b);
		}
		else
		{
			printf("\n%d is largest number",c);
		}
	}
*/	
}
