// program to find maximum of three given numbers

#include <stdio.h>

int main()
{
 int a,b,c;
 printf("enter value of a:");
 scanf("%d",&a);
 printf("enter value of b:");
 scanf("%d",&b);
 printf("enter value of c:");
 scanf("%d",&c);
 (a>b && a>c)?printf("%d is maximum",a):(b>c)?printf("%d is maximum",b):printf("%d is maximum",c);
 return 0;
}
