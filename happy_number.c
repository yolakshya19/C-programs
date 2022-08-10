#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,sum=0,m;
    printf("enter a number: ");
    scanf("%d",&n);
    m=n;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n>0)
        {
            a=n%10;
            sum=sum+(pow(a,2));
            n/=10;
        }
        n=sum;
    }
    if(sum==1)
        printf("%d is a happy number",m);
    else
        printf("not");
}
