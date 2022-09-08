#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,f=1,i,j;
    float sum=0;
    printf("enter the number of terms n: ");
    scanf("%d",&n);
    printf("enter the value of x: ");
    scanf("%d",&x);

    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
        {
            f*=j;
        }
        if(i%2==0)
            sum-=(pow(x,i)/f);
        else
            sum+=(pow(x,i)/f);
    }
    printf("SUM of the series: %.3f",sum);
}
