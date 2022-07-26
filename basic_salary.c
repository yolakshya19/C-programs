#include<stdio.h>
void main()
{
    float BS,DA,HRA,Gross,PF,Net;
    printf("enter your basic salary: ");
    scanf("%f",&BS);
    DA=0.25*BS;
    HRA=0.15*BS;
    Gross=BS+DA+HRA;
    PF=0.10*Gross;
    Net=Gross-PF;
    printf("Net Salary:%f",Net);
}
