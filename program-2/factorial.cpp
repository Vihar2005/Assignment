#include <stdio.h>

main() 
{
    int num, i,factorial = 1;

    printf("Enter nubmer of num : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
	{
        factorial=factorial* i;
    }

    printf("factorial of %d=%d", num, factorial);
}

