// C program for simple interst calculation

#include <stdio.h>

int main()
{
float si,p,t,r;
printf("enter principal amount:");
scanf("%f",&p);
printf("enter time(in years):");
scanf("%f",&t);
printf("enter rate of interest:");
scanf("%f",&r);
si=p*t*r/100;
printf("simple interst:%f",si);
}
