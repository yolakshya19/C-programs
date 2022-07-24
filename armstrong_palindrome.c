#include<stdio.h>
#include<math.h>
void main()
{
    int n,rev=0,a,temp,sum=0;
    printf("enter a 3 digit integer: ");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        sum=sum+pow(a,3);
        n/=10;
    }
    if(rev==temp && sum==temp)
        printf("%d is both armstrong and palindrome",temp);
    else
        printf("%d is not",temp);
}
