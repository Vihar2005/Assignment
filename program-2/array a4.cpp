#include <stdio.h>

int main() 
{
    int n, arr[100], smallest, secondSmallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    if (arr[0] < arr[1]) 
	{
        smallest = arr[0];
        secondSmallest = arr[1];
    } else 
	{
        smallest = arr[1];
        secondSmallest = arr[0];
    }

        for (int i = 2; i < n; i++) 
		{
        if (arr[i] < smallest) 
		{
            secondSmallest = smallest;
            smallest = arr[i];
        } 
		else if (arr[i] < secondSmallest) 
		{
            secondSmallest = arr[i];
        }
    }

    printf("The second smallest number is %d\n", secondSmallest);

}

