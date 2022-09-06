#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibNm2=fibonacci(n-2);
    int fibNm1=fibonacci(n-1);
    int fibN= fibNm1 + fibNm2;
    return fibN;
}

void main()
{
    int n,i;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d,",fibonacci(i));
    }
}