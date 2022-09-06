#include<stdio.h>
int power(int base,int exp)
{
    if (exp==0)
    {
        return 1;
    }
    
    if(exp==1)
    {
        return base;
    }
    int powNm1=power(base,exp-1);
    int powN=power(base,exp-1)*base;
    return powN;
}

void main()
{
    int base,exp;
    printf("enter the base and exponent: ");
    scanf("%d%d",&base,&exp);
    printf("result : %d",power(base,exp));
}