#include<stdio.h>
#define LEAP(year) \
if(year%4==0 && year%100!=0 || year%400==0) \
printf("%d is a leap year",year); \
else \
printf("%d is not a leap year",year);

void main()
{
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    LEAP(year);
}