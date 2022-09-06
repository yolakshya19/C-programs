#include<stdio.h>
int hcf(int a , int b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else
    return hcf(b,a%b);
}
void main()
{
    int a,b;
    printf("enter two integers: ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d : %d",a,b,hcf(a,b));
}