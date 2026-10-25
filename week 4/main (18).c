#include <stdio.h>

int main()
{
    float A,B,C,D,result;
    printf("enter value of A:");
    scanf("%f",&A);
    printf("enter value of B:");
    scanf("%f",&B);
    printf("enter value of C:");
    scanf("%f",&C);
    printf("enter value of D:");
    scanf("%f",&D);
    result=A/B*C-B+A*D/3;
    printf("A/B*C-B+A*D/3:%f",result);
    return 0;
}

