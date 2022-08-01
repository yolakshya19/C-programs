#include<stdio.h>
void main()
{
    int i,n;
    printf("enter an integer:");
    scanf("%d",&n);
    printf("the factors of %d are:\n",n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}
