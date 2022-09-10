#include<stdio.h>
void main()
{
    int a[10][10],b[10][10];
    int i,j,m,n,c=0;
    printf("enter the order of matrix mxn: ");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
        printf("enter the matrix elements: ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("transpose of the matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                b[i][j]=a[j][i];
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==b[i][j])
                c++;
            }
        }
        if(c==m*n)
        printf("symmetric");
        else
        printf("not");
    }
    else
    printf("Not");
}