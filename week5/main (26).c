#include <stdio.h>

int main()
{
    float a,b;
    int choice;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    
    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    
    printf("\nenter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
         case 1:
            printf("result=%.2f",a+b);
            break;
         case 2:
            printf("result=%.2f",a-b);
            break;
         case 3:
            printf("result=%.2f",a*b);
            break;
         case 4:
          if(b==0)
            printf("division by zero is not possible");
            break;
        else
            printf("result=%.2f",a/b);
            break;
        default:
            printf("invalid option");
    }
    return 0;
}
