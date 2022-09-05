#include<stdio.h>
void main()
{
    int *p,*q,a,b,c;
    p=&a;
    q=&b;
    printf("enter two numbers");
    scanf("%d%d",p,q);
    printf("%d\n%d\n",*p,*q);
    c=*p+*q;
    printf("sum=%d",c);
}