#include<stdio.h>
void main()
{
    float phy,chem,math;
    printf("enter the marks of phy, chem, math in order: ");
    scanf("%f%f%f",&phy,&chem,&math);

    if(phy>40 && chem>50 && math>60 && (phy+math>150 || phy+math+chem>200) )
    {
        printf("eligible");
    }
    else
    {
        printf("not eligible");
    }
}
