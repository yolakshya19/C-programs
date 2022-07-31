#include<stdio.h>
void main()
{
    int num;
    printf("Enter the integer to be checked whether even or odd:");
    scanf("%d",&num);
    num%2==0?printf("The entered integer is even"):printf("The entered integer is odd");
}
