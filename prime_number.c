#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("%d is a prime number",n);
    else
        printf("%d not a prime number",n);
}
