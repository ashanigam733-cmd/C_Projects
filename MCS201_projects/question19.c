#include <stdio.h>

// Function to take input
void input(int *a, int *b)
{
    printf("Enter two integers: ");
    scanf("%d %d", a, b);
}

// Function to multiply
int multiply(int a, int b)
{
    return a * b;
}

// Function to display result
void display(int result)
{
    printf("Product = %d", result);
}

int main()
{
    int num1, num2, result;

    input(&num1, &num2);        // input function
    result = multiply(num1, num2); // processing function
    display(result);            // output function

    return 0;
} 