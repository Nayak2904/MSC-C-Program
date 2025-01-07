#include <stdio.h>

void add_and_sub_two_numbers(int *num1, int *num2, int *sum, int *diff)
{
    *sum = *num1 + *num2;
    *diff = *num1 - *num2;
}

int main()
{
    int num1, num2, sum, diff;

    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second number: \n");
    scanf("%d", &num2);

    add_and_sub_two_numbers(&num1, &num2, &sum, &diff);

    int *p = sum;
    printf("Sum = %d\n", &p);
    printf("Difference = %d\n", diff);
    return 0;
}