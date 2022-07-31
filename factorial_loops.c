#include<stdio.h>
void main()
{
    int i,n,factorial,j;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=1;
        for(j=1;j<=i;j++)
        {
            factorial*=j;
        }
        printf("Factorial of %d is = %d",i,factorial);
        printf("\n");
    }
}
