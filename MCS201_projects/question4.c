#include <stdio.h>
int main()
{

    int a,b=5;
    float f;

    a=5/2;
    f=(float)b/2.0;

    b = (a<f)? 1 : 0;

    printf("b=%d\n",b);

}