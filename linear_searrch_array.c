#include<stdio.h>
void main()
{
    int a[10],n,i,ele,c=0;
    printf("enter the size of array max-10: ");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element to be searched: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        c++;
    }
    if(c>0)
    printf("element found %d times",c);
    else
    printf("not found");
}