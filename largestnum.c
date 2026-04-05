#include<stdio.h>
int main() {

    int a , b , c;

    printf("enter number 1: ");
    scanf("%d", &a);

    printf("enter number 2: ");
    scanf("%d", &b);

    printf("enter number 3: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("Largest number is %d\n", a);

    else if (b > a && b > c)
        printf("Largest number is %d\n", b);

    else
        printf("Largest number is %d\n", c);

    return 0;
}