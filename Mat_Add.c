#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter rows and columns:\n");
    scanf("%d %d",&rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter matrix 1:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
        
    }


    printf("Enter matrix 2:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
        
    }
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }


    printf("Result(Matix 1 + Matrix 2)\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\n", result[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}