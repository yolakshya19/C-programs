#include<stdio.h>
void main()
{
    int base,exponent,result=1,i;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the exponent: ");
    scanf("%d",&exponent);

    for(i=0;i<=exponent;i++)
    {
        result*=base;
    }
    printf("RESULT: %d",result);
}
