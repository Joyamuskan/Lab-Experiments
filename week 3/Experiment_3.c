// C program to find area of triangle

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,A;//a,b,c=sides of the triangle,s=semi perimeter
    printf("enter three sides values:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of the triangle:%f",A);
    return 0;
}
