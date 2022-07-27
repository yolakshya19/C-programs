#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    int num,rem,sum=0;
    num= atoi(argv[1]);

    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("Sum of digits: %d",sum);
}