#include<stdio.h>
void main()
{
    int n,m,i,j,sum_n=0,sum_m=0;
    printf("enter 1st number: ");
    scanf("%d",&n);
    printf("enter 2nd number: ");
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum_n+=i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            sum_m+=j;
        }
    }
    if(sum_n==m && sum_m==n)
        printf("%d and %d are amicable",n,m);
    else
        printf("not amicable");
}
