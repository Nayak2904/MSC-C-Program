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
    printf("Enter the name of the student:\n");
    scanf("%s", &s1.name);

    printf("Enter the roll no.: \n");
    scanf("%d", &s1.roll_no);

    printf("Enter mark of the student: \n");
    scanf("%d", &s1.mark);

    printf("Student Details:\n Name: %s\n Roll no: %d\n Mark: %d \n", s1.name, s1.roll_no, s1.mark);
    return 0;
}