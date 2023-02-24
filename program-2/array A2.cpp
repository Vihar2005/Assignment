#include <stdio.h>
#define MAX_ELEMENTS 10

int main()
{
    int arr[MAX_ELEMENTS];
    int max = 0, i;

    printf("Enter maximum number: \n");
    for (i = 0; i < MAX_ELEMENTS; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }

    printf("maximum number : %d", max);
}

