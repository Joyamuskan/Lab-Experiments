#include <stdio.h>

int main()
{
    float i,J;
    printf("enter value of i:");
    scanf("%f",&i);
    J=(i++)+(++i);
    printf("value of J:%f",J);
    return 0;
}
