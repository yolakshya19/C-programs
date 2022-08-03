#include<stdio.h>
void main()
{
    int a=0,b=1,c;
    printf("%d,%d",a,b);
    while(c<100)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>100)
        break;
        printf(",%d",c);
    }
}