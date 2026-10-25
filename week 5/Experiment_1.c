// C program to find max and min of 4 numbers

#include <stdio.h>

int main()
{
    int a,b,c,d,max,min;
    printf("enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=b&&a>=c&&a>=d)
    max=a;
    else if(b>=c&&b>=d)
    max=b;
    else if(c>=d)
    max=c;
    else
    max=d;
    if(a<=b&&a<=c&&a<=d)
    min=a;
    else if(b<=c&&b<=d)
    min=b;
    else if(c<=d)
    min=c;
    else
    min=d;
    printf("maximum:%d\nminimum:%d",max,min);
    return 0;
}
