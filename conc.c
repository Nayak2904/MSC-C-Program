#include <stdio.h>


void concatenate_strings(char* str1, char* str2) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++);

    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    str1[i + j] = '\0';
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    concatenate_strings(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}