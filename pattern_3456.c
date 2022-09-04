#include<stdio.h>
void main()
{
    int i,j,n=2,m;
    for(i=1;i<=6;i++)
    {
        m=n;
        for(j=6;j>=i;j--)
        {
            printf("%d ",m);
            m++;
        }
        n++;
        printf("\n");
    }
}