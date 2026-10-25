// program to calculate distance travelled by an object

#include <stdio.h>

int main()
{
    float speed,distance,time;
    printf("enter speed of the object:");
    scanf("%f",&speed);
    printf("enter time travelled by object:");
    scanf("%f",&time);
    distance=speed*time;
    printf("distance travelled by object:%.2f",distance);
    return 0;
}
