#include <stdio.h>

int main() 
{
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("After swapping, the first number is %d and the second number is %d.\n", num1, num2);

}

