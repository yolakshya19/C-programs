#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],m,n,i,j,c=0;
    printf("enter order of matrix, m & n: ");
    scanf("%d%d",&m,&n);

    if(m==n)
    {
        printf("enter matrix:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Transpose: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
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
                if(b[i][j]==a[i][j])
                c++;
            }
        }
        if(c==m*n)
        printf("symmetric");
        else
        printf("Not symmetric");
        
    }
    else
    {
        printf("Transpose not possible");
    }
}