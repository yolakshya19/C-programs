#include<stdio.h>
void main()
{
    int a[20],n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array in reverse: \n");
    for(i=n-1;i>=0;i--)
        printf("%d, ",a[i]);
}
