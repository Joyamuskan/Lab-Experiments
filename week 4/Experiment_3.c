// program to find total and average

#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;
    float tot,avg;
    printf("enter s1 marks:");
    scanf("%d",&s1);
    printf("enter s2 marks:");
    scanf("%d",&s2);
    printf("enter s3 marks:");
    scanf("%d",&s3);
    printf("enter s4 marks:");
    scanf("%d",&s4);
    printf("enter s5 marks:");
    scanf("%d",&s5);
    tot=s1+s2+s3+s4+s5;
    printf("total:%f",tot);
    avg=tot/5;
    printf("\naverage:%f",avg);
    return 0;
}
