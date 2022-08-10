#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,temp1,temp2,b,c=0,sum=0;
    printf("enter an integer: ");
    scanf("%d",&n);
    temp1=n;
    temp2=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        c++;
    }
    printf("no. of digits: %d\n",c);
    while(temp1>0)
    {
        b=temp1%10;
        temp1=temp1/10;
        sum=sum+pow(b,c);
    printf("sum: %d\n",sum);
    }
    if(sum==temp2)
    {
        printf("IS ARMSTRONG");
    }
    else
    {
        printf("NOT ARMSTRONG");
    }
}
