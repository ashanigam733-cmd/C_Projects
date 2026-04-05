#include <stdio.h>

void printNum(int n)
{
    if(n == 20)
        return;      // base condition

    printf("%d\n", n);
    printNum(n - 1); // recursive call
}

int main()
{
    printNum(50);
    return 0;
}