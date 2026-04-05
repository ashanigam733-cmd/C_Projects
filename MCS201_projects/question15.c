#include <stdio.h>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int TOTAL = 0;

    for (int i = 0; i < 5; i++)
    {
        TOTAL = TOTAL + numbers[i];
    }

    printf("Total = %d", TOTAL);

    return 0;
}