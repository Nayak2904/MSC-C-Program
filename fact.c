#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}
int main()
{
    int num;

    printf("Enter a number to find its factorial\n");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("factorial is not defined for negative numbers.\n");
    }else if (num == 0 || num == 1)
    {
        printf("factorial of %d is 1.\n", num);
    }else{
        printf("factorial of %d is %d.\n", num, factorial(num));
    }
    
    
    return 0;
}