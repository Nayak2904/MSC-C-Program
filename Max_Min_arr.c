#include <stdio.h>

void find_max_min(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
}
int main()
{
    int arr[] = {4, 7, 2, 9, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    find_max_min(arr, n);
    return 0;
}