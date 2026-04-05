#include<stdio.h>
int main() {

    char name [50]; 
    float basic , hra , da , gross;

    printf("enter employee name : ");
    scanf("%s" , name);

    printf("enter employee basic salary : ");
    scanf("%f" , &basic);

    printf("---Salary Slip of Employee---\n");

    printf("Employee Name : %s\n" , name);

    printf("Basic Salary : %f\n" , basic);

    hra = basic * 0.20;
    printf(" HRA %.2f\n" , hra);

    da  = basic * 0.10;
    printf("DA %.2f\n" , da);

    printf("----------------------------\n");

    gross = (float) basic + hra + da;
    printf("Gross Salary %.2f\n" , gross);

    return 0;

}
