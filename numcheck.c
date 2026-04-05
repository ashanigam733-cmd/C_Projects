#include<stdio.h>
int main () {

    int number;

    printf("enter the number(+ve/-ve) : ");
    scanf("%d" , &number);

    if (number > 0)
        printf("the number %d is positive!\n", number);

    else if (number < 0)
        printf("the number %d is negative!\n ", number);

    else 
        printf("the number %d is zero\n", number);

    return 0;
}