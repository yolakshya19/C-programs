#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the size of array max is 10: ");
    scanf("%d",&n);
    if(n<=10)
    {
        printf("enter the array elements: ");
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    else
    {
        printf("wrong size");
    }
}
