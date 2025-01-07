#include <stdio.h>

#define MAX_SIZE 100

// print even element
void print_even(int arr[], int n)
{
    printf("Even elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}
// print odd element
void print_odd(int arr[], int n)
{
    printf("Odd elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d", arr[i]);
        }
    }
    printf("\n");
}

// calculate sum and avg
void calculate_sum_avg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float avg = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
}

// find min-max
void find_min_max(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
}

// Remove duplicate
void remove_duplicate(int arr[], int* n)
{
    int i, j, k;
    for (i = 0; i < *n; i++)
    {
        for (j = 0; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = 0; k < *n - 1; k++)
                {
                    arr[k] = arr[k - 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

// array in reverse order
void print_reverse(int arr[], int n)
{
    printf("Reverse order: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[MAX_SIZE];
    int n;

    printf("Enter the number of elements (max %d)\n", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int choice;
    do{
        printf("\nMenu:\n");
        printf("1. Print even elements\n");
        printf("2. Print odd elements\n");
        printf("3. Calculate sum and average\n");
        printf("4. Print maximum and minimun elements\n");
        printf("5. Remove duplicates\n");
        printf("6. Print array in reverse order\n");
        printf("7. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            print_even(arr, n);
            break;
        case 2:
            print_odd(arr, n);
            break;
        case 3:
            calculate_sum_avg(arr, n);
            break;
        case 4:
            find_min_max(arr, n);
            break;
        case 5:
            remove_duplicate(arr, &n);
            printf("Updated array: ");
            for (int i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
            }
            printf("\n");
            break;
        case 6:
            print_reverse(arr, n);
            break;
        case 7:
            printf("Exiting...\n");
        default:
            printf("Invalid Choice!, please try again!!!\n");
        }
    } while (choice != 7);

    

    return 0;
}