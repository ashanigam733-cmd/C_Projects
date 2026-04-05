#include <stdio.h>

struct student
{
    int roll_no;
    char name[50];
    float marks;
};

void display(struct student *s)
{
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}

int main()
{
    struct student s1 = {101, "Radhika", 95.5};

    display(&s1);   // passing address

    return 0;
}