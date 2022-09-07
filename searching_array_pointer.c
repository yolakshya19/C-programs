#include<stdio.h>
void main()
{
    int a[10],n,i,key,c=0;
    int *p;
    printf("enter the size of array max-10: ");
    scanf("%d",&n);
    printf("enter the number to find in array: ");
    scanf("%d",&key);
    p=&a[0];
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        if(key==*(p+i))  
        {
            c++;
        }
    }
    if(c>0)
    printf("%d found in array %d times",key,c);
    else
    printf("%d not found in array",key);
}