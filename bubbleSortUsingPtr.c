#include <stdio.h>
int *bubble_Sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main()
{
    int arr[] = {80, 11, 25, 53};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    print_array(arr, size);

    bubble_Sort(arr, size);

    printf("\n Sorted Array: ");
    print_array(arr, size);

    return 0;
}