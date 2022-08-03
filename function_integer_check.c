#include<stdio.h>
#include<math.h>

float armstrong(int n)
{
    float a,c=0;
    int temp;
    temp=n;
    float sum=0;
    while(n>0)
    {
        a=n%10;
        c++;
        n/=10;
    }
    while(temp>0)
    {
        a=temp%10;
        sum=sum+pow(a,c);
        temp/=10;
    }
    return sum;
}

int palindrome(int n)
{
    int a,rev=0;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    return rev;
}

int strong(int n)
{
    int i,a,sum=0,f;
    while(n>0)
    {
        f=1;
        a=n%10;
        for(i=1;i<=a;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    return sum;
}

void main()
{
    int n;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);

    if(armstrong(n)==n)
    printf("%d is armstrong",n);
    else
    printf("%d is not armstrong",n);
    printf("\n");

    if(palindrome(n)==n)
    printf("%d is palindrome",n);
    else
    printf("%d is not palindrome",n);
    printf("\n");

    if(strong(n)==n)
    printf("%d is strong number",n);
    else
    printf("%d is not strong number",n);
}