#include<stdio.h>
void main()
{
    int i,n,a,rev;
    printf("3 digit palindrome no.s are: ");
    for(i=100;i<=999;i++)
    {
        rev=0,n=i;
        while(n>0)
        {
            a=n%10;
            rev=rev*10+a;
            n=n/10;
        }
        if(rev==i)
            printf("%d\n",i);
    }
}
