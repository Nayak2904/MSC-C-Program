#include <stdio.h>

int find_max(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
    
}

int find_min(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    return min;
}
int main()
{
    int arr[] = {10,30, 5, 6, 23, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum value: %d\n", find_max(arr, size));
    printf("Minimum value: %d\n", find_min(arr, size));
    return 0;
}