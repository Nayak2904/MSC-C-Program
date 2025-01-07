#include <stdio.h>
int main()
{
    int n;
    int a = 10;
    int b = 15;
    int x = 2;
    int sum = 0;
    float y = 2.5;
    char z = 'a';

    printf("Hello!!!");

printf("x = %d\n", x);
printf("y = %f\n", y);
printf("z = %c\n", z);

printf("a+b = %d\n", a+b);
printf("a-b = %d\n", a-b);
printf("a*b = %d\n", a*b);
printf("a/b = %d\n", a/b);

printf("Enter a number: \n");
scanf("%d",&n);

for (int i = 1; i <= n; i++)
{
    /* code */
    sum += i;
}

printf("The sum of first %d natural number is= %d\n", n, sum);

    return 0;
}