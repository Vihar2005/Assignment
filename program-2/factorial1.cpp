#include<stdio.h>
void factoria();
main()
{
	factorial();
}
void fsctorial()
{
	int num, i,factorial = 1;
	
	printf("enter value of num : ");
	scanf("%d"&num);
	
	for (i = 1; i <= num; i++)
	{
        factorial=factorial* i;
    }
    
     printf("factorial of %d=%d", num, factorial);
     
}

