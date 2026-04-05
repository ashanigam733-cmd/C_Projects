#include <stdio.h>

union student
{
    int roll_no;
    float marks;
};

int main()
{
    union student s;

    s.roll_no = 101;
    printf("Roll No: %d\n", s.roll_no);

    s.marks = 95.5;
    printf("Marks: %.2f\n", s.marks);

    return 0;
}