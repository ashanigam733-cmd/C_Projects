#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d", i);
    } 
    while(i = i - 1);

    return 0;
}

