//C program for conversion of temperature

#include <stdio.h>

int main()
{
float c,f;
printf("\n enter temperature in celsius:");
scanf("%f",&c);
f=c*9/5+32;
printf("\n temperature in fahrenheit:%f",f);
printf("\n enter temperature in fahrenheit:");
scanf("%f",&f);
c=(f-32)*(5.0/9.0);
printf("temperature in celsius:%f",c);
}
