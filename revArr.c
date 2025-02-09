#include <stdio.h>

void revArr(int arr[], int n)
{
    int start = 0, end = n - 1, temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    int n;

    printf("Enter the numbers of elements in Array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    revArr(arr, n);
    printf("\nReversed Array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}