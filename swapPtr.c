#include <stdio.h>
void swap_two_numbers(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    printf("Before Swapping\n");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    swap_two_numbers(&num1, &num2);

    printf("After swapping\n");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);
    return 0;
}