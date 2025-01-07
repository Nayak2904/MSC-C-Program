#include <stdio.h>

struct Student_Details
{
    char name[50];
    int roll_no;
    int mark;
};

int main()
{
    
    struct Student_Details s1;
    int n;
    printf("Enter the number of students: \n");
    scanf("%d", &n);
    printf("Enter the details for students: \n");

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the name of the student %d\n", i);
        scanf("%s", &s1.name);

        printf("Roll no.: ");
        scanf("%d", &s1.roll_no);

        printf("Mark of the student: ");
        scanf("%d", &s1.mark);
        printf("\nStudent Details:\n");
        printf("Name: %s\n", s1.name);
        printf("Roll Number: %d\n", s1.roll_no);
        printf("Mark: %d\n", s1.mark);
    }

    return 0;
}