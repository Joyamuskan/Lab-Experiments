// C program to find sum and average of 3 numbers

#include <stdio.h>

int main()
{
     int a,b,c,sum;
     float avg;
     printf("enter a:");
     scanf("%d",&a);
     printf("enter b:");
     scanf("%d",&b);
     printf("enter c:");
     scanf("%d",&c);
     sum=a+b+c;
     printf("sum of three numbers:%d",sum);
     avg=sum/3;
     printf("average of three numbers:%f",avg);
     return 0;
}
