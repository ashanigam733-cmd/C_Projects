#include<stdio.h>
int main() {

    for(int i = 1; i <= 30; i++) {

    if(i % 3 == 0 && i % 5 == 0)
        printf("ThreeFive\n");

    else if(i % 3 == 0)
        printf("Three\n");

    else if(i % 5 == 0)
        printf("Five\n");

    else
        printf("%d\n" , i);
    }

    return 0;

}