#include<stdio.h>
void main()
{
    int n,sum=0,sum_rev=0,temp,sum_temp,a,b;
    printf("enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum+=a;
        n/=10;
    }
    sum_temp=sum;
    while(sum>0)
    {
        b=sum%10;
        sum_rev=sum_rev*10+b;
        sum/=10;
    }
    if(sum_temp*sum_rev==temp)
        printf("%d is a magic number",temp);
    else
        printf("not");
}
