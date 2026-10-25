// C program to find compound interest

#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,ci;
    printf("enter principal amount:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter time period:");
    scanf("%f",&t);
    ci=p*pow(1+r/100,t)-p;
    printf("compound interest:%f",ci);
    return 0;
    
}
