#include <stdio.h>
int main() {

    int a ,b;
        printf("enter number 1 : ");
        scanf("%d", &a);

        printf("enter numbe 2 : ");
        scanf("%d",&b);

        int sum = a + b;
        printf("sum %d\n", sum);

        int sub = a - b;
        printf("difference %d\n", sub);

        float divide = (float)a / b;
        printf("division %.2\n", divide);

        int multiply = a * b;
        printf("multiplication %d\n", multiply);

        return 0;
        
}