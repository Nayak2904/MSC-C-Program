#include <stdio.h>
int main()
{
    int rows;
    printf("Enter rows:\n");
    scanf("%d", &rows);

    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}