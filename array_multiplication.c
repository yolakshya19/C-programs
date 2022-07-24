#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j;
    printf("enter order of 1st matrix, m & n: ");
    scanf("%d%d",&m,&n);
    printf("enter order of 2nd matrix, p & q: ");
    scanf("%d%d",&p,&q);

    if(n==p)
    {
                printf("enter 1st matrix:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
                printf("enter 2nd matrix:");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication not ppossible");
    }
}