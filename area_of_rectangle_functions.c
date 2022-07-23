#include<stdio.h>
float rectangle(float l,float b)
{
    float product;
    product=l*b;
    return product;
}
void main()
{
    float l,b,area;
    printf("enter the length and breadth of the rectangle: ");
    scanf("%f%f",&l,&b);
    area=rectangle(l,b);
    printf("AREA OF RECTANGLE: %.2f",area);
}