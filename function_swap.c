#include<stdio.h>
void swap(int n,int m)
{
    int temp;
    temp=n;
    n=m;
    m=temp;
}

void main()
{
    int n, m;
    printf("enter two integers: ");
    scanf("%d%d",&n,&m);
    printf("BEFORE SWAPPING: n=%d\tm=%d",n,m);
    printf("\n");
    swap(n,m);
    printf("AFTER SWAPPING: n=%d\tm=%d",n,m);
}