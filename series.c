#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,j,f=1,x;
    float sum=1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of x: ");
    scanf("%d",&x);

    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        if(i%2==0)
            sum=sum+(pow(x,i)/f);
        else
            sum=sum-(pow(x,i)/f);
    }
    printf("Sum of series: %.3f",sum);
}
