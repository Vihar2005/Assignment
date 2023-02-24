#include <stdio.h>
main() 
{
    int m, n, matrix[100][100];

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &m);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
        
		{
            scanf("%d", &matrix[i][j]);
        }
        
    }

    printf("The matrix is:\n");
    
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}

