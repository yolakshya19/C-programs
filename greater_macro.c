#include<stdio.h>
#define LARGE(a,b) \
if(a>b) \
printf("%d is greater",a); \
else \
printf("%d is greater",b); 

void main()
{
    int n,m;
    printf("Enter n and m: ");
    scanf("%d%d",&n,&m);
    LARGE(n,m);
}