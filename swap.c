#include<stdio.h>
void main()
{
    float a,b;
    printf("enter the value of a: ");
    scanf("%f",&a);
    printf("enter the value of b: ");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped values are a=%.2f and b=%.2f",a,b);
}
