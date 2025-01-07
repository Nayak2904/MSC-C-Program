#include <stdio.h>

struct StudentData
{
    char name[50];
    int roll_no;
    int mark;
};

int main()
{
    struct StudentData str[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Details of the Student: %d\n", i + 1);

        printf("Name: \n");
        scanf("%s", &str[i].name);
        printf("Roll No.: \n");
        scanf("%d", &str[i].roll_no);
        printf("Mark:\n");
        scanf("%d", &str[i].mark);
    }

    printf("Students Details: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Name: %s\n", str[i].name);
        printf("Roll no.: %d\n", str[i].roll_no);
        printf("Mark: %d\n", str[i].mark);
    }

    return 0;
}