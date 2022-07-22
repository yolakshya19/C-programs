#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,a,sum;
    printf("4 digit armstrong are: \n");
    for(i=1000;i<=9999;i++)
    {
        n=i,sum=0;
        while(n>0)
        {
            a=n%10;
            sum=sum+pow(a,4);
            n=n/10;
        }
        if(sum==i)
            printf("%d\n",i);
    }
}
