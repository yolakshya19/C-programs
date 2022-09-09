#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    int *p;
    printf("enter the size of array max-10: ");
    scanf("%d",&n);
    p=&a[0];
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    sum=*p;
    for(i=1;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum of array: %d",sum);
}