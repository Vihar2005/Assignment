#include<stdio.h>
main()
{
	int year;
	
	printf("enter a year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("given year is not leap year");
	}
	else
	{
		printf("given year is leap year");
	}
}
