#include<stdio.h>
void main()
{
    int num,m,a,b,c,d,result;
    printf("enter a 4-digit positive integer: ");
    scanf("%d",&num);
    m=num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    if(a%2==0)
    {
        result=m*5;
        printf("Result=%d",result);
    }
    else
    {
        result=a*6;
        printf("Result=%d",result);
    }
}
