#include<stdio.h>
void main()
{
    int a,x,b,n,y;
    printf("enter the values of a,x,b in order: ");
    scanf("%d%d%d",&a,&x,&b);
    printf("enter your choice: ");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        y=(a*x)%b;
        printf("value of y=%d",y);
        break;
    case 2:
        y=a*(x*x)+(b*b);
        printf("value of y=%d",y);
        break;
    case 3:
        y=a-b*x;
        printf("value of y=%d",y);
        break;
    case 4:
        y=a+x/b;
        printf("value of y=%d",y);
        break;
    default:
        printf("INVALID CHOICE");
    }
}
