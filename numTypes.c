#include <stdio.h>

void count_occurrences(int arr[], int n)
{
    int i, j, count;

    // Sort the array
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Count occurrences
    i = 0;
    while (i < n)
    {
        count = 1;
        j = i + 1;
        while (j < n && arr[i] == arr[j])
        {
            count++;
            j++;
        }
        printf("%d -> %d\n", arr[i], count);
        i = j;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    count_occurrences(arr, n);

    return 0;
}