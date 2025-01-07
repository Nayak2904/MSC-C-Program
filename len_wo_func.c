#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("String length: %d\n", length);

    return 0;
}