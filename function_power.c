#include<stdio.h>
#include<math.h>
void Power(int n);

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    Power(n);
    return 0;
}
void Power(int n)
{
    int result;
    result=pow(n,2);
    printf("%d",result);
}