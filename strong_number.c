#include<stdio.h>
void main()
{
    int a,n,f=1,sum=0,i,m;
    printf("enter a number: ");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        f=1;
        a=n%10;
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==m)
        printf("%d is strong number",m);
    else
        printf("NOT");
}
