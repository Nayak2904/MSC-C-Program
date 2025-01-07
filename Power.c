#include <stdio.h>
#include <math.h>
double power(int x, int y){
    return pow((double)x, (double)y);
}
int main()
{
    printf("%f\n", power(2,3));
    return 0;
}