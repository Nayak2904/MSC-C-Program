#include <stdio.h>

void swap_two_array(int *arr1, int *arr2, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}
void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", *(arr + i));
    }
    printf("\n");
}
int main()
{
    int arr1[5];
    int arr2[5];
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("Enter the elements of Array 1: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of Array 2: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Before swapping\n");
    printf("Array 1: ");
    print_array(arr1, size);
    printf("Array 2: ");
    print_array(arr2, size);

    swap_two_array(arr1, arr2, size);

    printf("After swapping\n");
    printf("Array 1: ");
    print_array(arr1, size);
    printf("Array 2: ");
    print_array(arr2, size);

    return 0;
}