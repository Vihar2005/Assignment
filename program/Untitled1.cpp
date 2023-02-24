#include <stdio.h>

int main()
{
    int i, j, k, n = 5;
    
    for (i = 0; i < n; i++) 
    {
        for (j = i; j < n; j++) 
        {
            printf("*");
        }
        for (k = 0; k < 2 * i; k++) 
        {
            printf(" ");
        }
        for (j = i; j < n; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

