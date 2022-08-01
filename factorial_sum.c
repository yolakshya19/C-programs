#include<stdio.h>
int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

void main()
{
    int sum=0,n,f,i;
    printf("enter the number of terms, n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=factorial(i);
        sum+=f;
    }
    printf("SUM= %d",sum);
}