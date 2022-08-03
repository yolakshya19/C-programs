#include<stdio.h>
void main()
{
    int n,first,last;
    scanf("%d",&n);
    last=n%10;
    first=n/10;
    while(first>=10)
    {
        first/=10;
    }
    printf("first digit=%d and last digit=%d",first,last)
}
