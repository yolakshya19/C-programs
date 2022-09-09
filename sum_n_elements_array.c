#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    printf("enter the size max is 10: ");
    scanf("%d",&n);
    if(n<=10)
    {
        printf("enter the array elements: ");
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        printf("sum of elements: %d",sum);
    }
    else
        printf("out of limit");
}
