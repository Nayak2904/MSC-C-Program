#include <stdio.h>

void fibonacci(int n)
{
    int a = 0;
    int b = 1;

    printf("Fibonacci series upto %d:\n", n);
    printf("%d %d\n", a, b);

    int next = a + b;
    while (next <= n)
    {
        printf("%d, ", next);
        a = b;
        b = next;
        next = a + b;
    }
}

int main()
{
    int range;
    printf("Enter range:\n", range);
    scanf("%d", &range);

    fibonacci(range);
    return 0;
}