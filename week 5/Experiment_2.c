// C program to calculate electricity bill

#include <stdio.h>

int main()
{
    float units,total_amount;
    printf("Enter no of units consumed:");
    scanf("%f",&units);
    if(units<=100)
    total_amount=units*1.50;
    else if(units<=200)
    total_amount=units*2.50;
    else if(units<=500)
    total_amount=units*4.00;
    else
    total_amount=units*6.00;
    printf("Total bill amount:%.2f",total_amount);
    return 0;
}
