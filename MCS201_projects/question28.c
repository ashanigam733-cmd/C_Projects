#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d\n", *p);   // 10

    p++;  
    printf("%d\n", *p);   // 20

    p = p + 2;
    printf("%d\n", *p);   // 40

    return 0;
}