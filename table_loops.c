#include<stdio.h>
void main()
{
    int i,n,product;
    printf("enter a number to get its table:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        product=n*i;
        printf("%d * %d = %d \n",n,i,product);
    }
}
