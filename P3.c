#include <stdio.h>
int main()
{
    int array[100], n, i, position, element;

    printf("Enter the elements in the array: \n");
    scanf("%d",&n);

    printf("Enter %d elements: \n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the element to insert: \n");
    scanf("%d",&element);

    printf("Enter the position where the element should be inserted: \n");
    scanf("%d",&position);

    for ( i = n; i >= position; i--)
    {
        array[i] = array[i-1];
    }
    
    array[position - 1] = element;
    n++;

    printf("Array after insertion: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}