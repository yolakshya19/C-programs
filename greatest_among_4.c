#include<stdio.h>
void main()
{
    int a,b,c,d,great1,great2;
    printf("Enter 4 integers to find the greatest among them:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    great1=a>b?a:b;
    great2=c>d?c:d;
    great1>great2?printf("the greatest integer is:%d",great1):printf("the greatest integer is:%d",great2);
}
