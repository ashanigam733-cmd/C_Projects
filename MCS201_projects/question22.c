#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct student s1 = {101, "Radhika", 95.5};

    printf("Roll No: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}