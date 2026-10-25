// program to find roots of the equation

#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,root1,root2;
    printf("enter a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d)/(2*a));
        root2=(-b-sqrt(d)/(2*a));
        printf("roots are %.2f and%.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=-b/(2*a);
        printf("roots are equal:%.2f",root1);
    }
    else
    {
        root1=(-b/(2*a));
        root2=(sqrt(-d)/(2*a));
        printf("roots are %.2f+%.2fi,%.2f-%.2fi",root1,root2,root1,root2);
    }
    return 0;
}
