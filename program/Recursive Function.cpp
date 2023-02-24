#include <stdio.h>

int factorial(int n) 
{ 

	{
        n * factorial(n-1);
    }
}

main() 
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) 
	{
        printf("Error: Invalid input\n");
    }
    printf("%d! = %d\n", n, factorial(n));
}

