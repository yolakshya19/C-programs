#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int facNm1=factorial(n-1);
    int facN=factorial(n-1)*n;
    return facN;
}
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("factorial of %d: %d",n,factorial(n));
}