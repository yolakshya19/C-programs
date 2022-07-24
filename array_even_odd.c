#include<stdio.h>
void main()
{
    int a[20],even[20],odd[20],i,n,e=0,o=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    if(n<=20)
    {
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("even elements: \n");
    for(i=0;i<e;i++)
        printf("%d, ",even[i]);

    printf("\n");

    printf("odd elements: \n");
    for(i=0;i<o;i++)
        printf("%d, ",odd[i]);
    }
    else
        printf("array overflow");
}
