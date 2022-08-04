#include<stdio.h>
#include<math.h>

int factorial(int i)
{
    int c,f=1;
    for(c=1;c<=i;c++)
    {
        f*=c;
    }
    return f;
}

void main()
{
    int i,x,n;
    float numerator,denominator;
    float sum=0;
    printf("enter the number x and no. of terms n: ");
    scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++)
    {
        denominator=factorial(i);
        numerator=pow(x,i);
        sum+=numerator/denominator;
    }
    printf("Sum of series= %.3f",sum);
}