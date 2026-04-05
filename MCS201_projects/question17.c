#include <stdio.h>
#include <string.h>
int main()
{
    char name[10] = "IGNOU";
    printf("\n%c", name[0]);
    printf("\n%s", name);



    char s[]= "\nhello";
    int j=0;
    while(s[j]!='\0')
        printf("%c",s[j++]);

    
    char str[]= "\nhello";
    printf("%10.2s",str);
    printf("%-10.2s",str);
    printf("\nLength = %d", strlen(str));

}