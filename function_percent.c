#include<stdio.h>
float percent(float m,float sci,float sans)
{
    float percent;
    percent=(m+sci+sans)/3;
    return percent;
}
void main()
{
    float m,sci,sans;
    printf("enter the marks of math, science & sanskrit: \n");
    scanf("%f%f%f",&m,&sci,&sans);
    printf("Percentage : %.3f",percent(m,sci,sans));
}