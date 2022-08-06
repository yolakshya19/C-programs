#include<stdio.h>
float temp(float c)
{
    float f;
    f=(c*9/5)+32;
    return f;
}
void main()
{
    float c;
    printf("enter temperature in celcius: ");
    scanf("%f",&c);
    printf("temperature in farenhiet: %.3f",temp(c));
}