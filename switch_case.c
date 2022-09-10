#include<stdio.h>
void main()
{
    int n;
    int a,x,b,y;
    printf("enter your choice: ");
    scanf("%d",&n);
    printf("enter the values of a,x,b in order: ");
    scanf("%d%d%d",&a,&x,&b);

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
        y=a-(b*x);
        printf("value of y=%d",y);
        break;
    case 4:
        y=a+x/b;
        printf("value of y=%d",y);
        break;
    default:
        printf("invalid choice");
    }
}
