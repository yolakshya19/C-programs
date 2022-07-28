#include<stdio.h>
#include<math.h>
void main()
{
    float CI,Amount,P,t,r;
    printf("enter the principal amount: ");
    scanf("%f",&P);
    printf("enter the rate: ");
    scanf("%f",&r);
    printf("enter the time or years: ");
    scanf("%f",&t);

    Amount=P*(pow((1+r/100),t));
    CI=Amount-P;
    printf("Compound Interest: %.2f",CI);
}
