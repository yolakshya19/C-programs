#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    float root1,root2,real_part,imaginary_part;
    printf("enter the values of a, b, c in order : ");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0)
    {
        printf("invalid");
    }
    d=(b*b)-(4*a*c);

    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots are real and unequal \n");
        printf("root1=%.2f \nroot2=%.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("roots are real and equal \n");
        printf("root1=root2=%.2f",root1,root2);
    }
    else
    {
        real_part=-b/(2*a);
        imaginary_part=sqrt(-d)/(2*a);
        printf("roots are imaginary \n");
        printf("root1=%.2f + i%.2f \nroot2=%.2f - i%.2f",real_part,imaginary_part,real_part,imaginary_part);
    }
}
