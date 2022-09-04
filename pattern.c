#include<stdio.h>
void main()
{
    int i,j,x;
    for(i=3;i>=1;i--)
    {
        x=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x--;
        }
        printf("\n");
    }
}
