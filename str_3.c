#include <stdio.h>
#include <string.h>

struct Car
{
    char brand[20];
    char country[20];
    char model[20];
};

int main()
{
    struct Car cars[3] = {
        {"Toyota", "Japan", "Corola"}, {"Ford", "USA", "Mustang"}, {"BMW", "Germany", "3 Series"}};

    printf("%s | %s | %s\n", "Brand", "Country", "Model");
    printf("________________________________\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s | %s | %s\n", cars[i].brand, cars[i].country, cars[i].model);
    }

    return 0;
}