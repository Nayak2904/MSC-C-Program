#include <stdio.h>
int main()
{
    int rows, cols;

    printf("Enter number of rows:\n");
    scanf("%d",&rows);

    printf("Enter number of columns:\n");
    scanf("%d",&cols);

    int matrix[rows][cols];

    printf("Enter Marix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }

    printf("Original Matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix is:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d", matrix[j][i]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}