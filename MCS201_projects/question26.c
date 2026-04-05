#include <stdio.h>

struct student
{
    int roll_no;
};

int main()
{
    struct student s = {101};
    struct student *ptr = &s;

    printf("%d\n", s.roll_no);     // dot
    printf("%d\n", ptr->roll_no);  // arrow

    return 0;
}