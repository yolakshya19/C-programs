#include<stdio.H>
float square(float side)
{
    return side*side;
}
float circle(float radius)
{
    return 3.14*radius*radius;
}
float rect(float l, float b)
{
    return l*b;
}
void main()
{
    float side,radius,l,b;
    printf("enter side, radius , length & breadth: \n");
    scanf("%f%f%f%f",&side,&radius,&l,&b);
    
    printf("area of square=%f \n",square(side));
    printf("area of circle=%f \n",circle(radius));
    printf("area of rectangle=%f \n",rect(l,b));
}