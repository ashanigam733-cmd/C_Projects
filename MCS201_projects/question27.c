#include <stdio.h>

int main() {
    int x = 10;

    int *p;    // pointer to int
    int **pp;  // pointer to pointer

    p = &x;    // p stores address of x
    pp = &p;   // pp stores address of p

    printf("Value of x = %d\n", x);
    printf("Value using p = %d\n", *p);
    printf("Value using pp = %d\n", **pp);

    return 0;
}