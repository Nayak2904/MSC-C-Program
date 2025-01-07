#include <stdio.h>

void reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the elements of Array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    print_array(arr, size);

    reverse_array(arr, size);

    printf("Reversed array: ");
    print_array(arr, size);

    return 0;
}