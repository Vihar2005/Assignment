#include <stdio.h>

int main() 
{
    int n, arr[100], position, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to retrieve: ");
    scanf("%d", &position);

    if (position >= 1 && position <= n) 
	{
        element = arr[position - 1];
        printf("The element at position %d is %d\n", position, element);
    } 
	else 
	{
        printf("Invalid position. Please enter a position between 1 and %d\n", n);
    }

}

