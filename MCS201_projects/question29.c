#include <stdio.h>

int main() {
    char *ptr = "Hello";

    printf("%c\n", *ptr);       // H
    printf("%c\n", *(ptr+1));   // e
    printf("%s\n", ptr);        // Hello

    return 0;
}