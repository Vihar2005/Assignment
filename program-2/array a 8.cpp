#include <stdio.h>
main() 
{
    int m, n, matrix1[100][100], matrix2[100][100], difference[100][100];

    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &m);

    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &n);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }

        for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The difference of the two matrices is:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}

