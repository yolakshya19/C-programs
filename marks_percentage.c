#include<stdio.h>
void main()
{
    float m1,m2,m3,m4,m5,sum,max,percent;
    printf("enter marks of 5 subjects: ");
    scanf("%f,%f,%f,%f,%f",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    max=500.0;
    percent=(sum/max)*100;
    printf("Sum=%f",sum);
    printf("\nPercentage=%f",percent);
}
