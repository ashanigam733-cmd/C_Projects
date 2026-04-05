#include <stdio.h>
    // function call
void multiply (int a , int b)
{
    int product;
    product = a * b;
    printf("product = %d ", product);

}

int main()
{
    int num1 , num2;

    printf("enter two numbers : ");
    scanf("%d %d\n",&num1 , &num2);

    //function call 

    multiply(num1, num2);

    return 0;

}
