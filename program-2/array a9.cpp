#include <stdio.h>
main() 
{
    int m, n, p, matrix1[100][100], matrix2[100][100], product[100][100];

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &m);

    printf("Enter the number of columns in the first matrix and rows in the second matrix: ");
    scanf("%d", &n);

    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &p);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < p; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < p; j++) 
		{
            int sum = 0;
            for (int k = 0; k < n; k++) 
			{
                sum += matrix1[i][k] * matrix2[k][j];
            }
            product[i][j] = sum;
        }
    }

    printf("The product of the two matrices is:\n");
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < p; j++) 
		{
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

}

