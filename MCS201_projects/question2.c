#include <stdio.h>
int main()
{ 

    int a=2 , b=3 ,c=4 , k;
    k = ++b + --a*c + a;
    printf("a= %d b= %d c= %d k= %d\n",a,b,c,k);

}