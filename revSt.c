#include <stdio.h>
#include <string.h>

void reverse_string(char *str, int i)
{
    if (i >= strlen(str) / 2)
        return;

    char temp = str[i];
    str[i] = str[strlen(str) - i - 1];
    str[strlen(str) - i - 1] = temp;
    reverse_string(str, i + 1);
}

int main()
{
    char str[100];
    printf("Enter a string: \n");
    scanf("%s", &str);
    printf("Original string: %s\n", str);

    reverse_string(str, 0);
    printf("Reversed string: %s\n", str);
    return 0;
}