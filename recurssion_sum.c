#include<stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sum(n-1)+n;
    return sumN;
}
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("SUM= %d",sum(n));
}