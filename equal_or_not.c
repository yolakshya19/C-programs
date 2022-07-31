#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 2 integers to check their equality:");
    scanf("%d,%d",&num1,&num2);
    num1==num2?printf("both the integers are equal"):printf("both the integers are unequal");
}
