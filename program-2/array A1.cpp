#include<stdio.h>
main()
{
	int array[10];
	int i;
	int sum=0,avg=0;
	
	for(i=0;i<2;i++)
	{
		{
			  sum=sum+array[i];
		}
		avg=sum/5;
		printf("\nAverage of the elements of the row %d is %d",i+1,avg);
		
		sum=0;
		
	}
	return(0);
}
