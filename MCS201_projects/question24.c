#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct student s[3];
    int i;

    // Input
    for(i = 0; i < 3; i++)
    {
        printf("Enter details of student %d:\n", i+1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Output
    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d Details:\n", i+1);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}