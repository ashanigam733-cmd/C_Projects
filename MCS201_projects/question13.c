#include <stdio.h>
int main()
{
    int i, n = 3;

    for(i = 3; n <= 20; ++n)
    {
        if(i == n)
            printf("%d\n", i);

        if(n % i == 0)
            break;
    }
}