#include <stdio.h>
int main()
{
     float A,B,C,D,E,F,G,result;
     printf("enter value of A:");
     scanf("%f",&A);
     printf("enter value of B:");
     scanf("%f",&B);
     printf("enter value of C:");
     scanf("%f",&C);
     printf("enter value of D:");
     scanf("%f",&D);
     printf("enter value of E:");
     scanf("%f",&E);
     printf("enter value of F:");
     scanf("%f",&F);
     printf("enter value of G:");
     scanf("%f",&G);
     result=A+B*C+(D*E)+F*G;
     printf("A+B*C+(D*E)+F*G=%f",result);
     return 0;
}
