#include<stdio.h>
#include<math.h>
void main()
{
    int num,a,b,c,d,m,choice;
    int sum,rev,armstrong;
    printf("enter a 4-digit positive integer: ");
    scanf("%d",&num);
    m=num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    printf("enter your choice from 1-5: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        sum=a+b+c+d;
        printf("sum of digits= %d",sum);
        break;
    case 2:
        printf("digits are: \n%d, %d, %d, %d",d,c,b,a);
        break;
    case 3:
        rev=a*1000+b*100+c*10+d;
        printf("reverse is: %d",rev);
        break;
    case 4:
        rev=a*1000+b*100+c*10+d;
        if(rev==m)
        {
            printf("IS PALINDROME");
        }
        else
        {
            printf("NOT PALINDROME");
        }
        break;
    case 5:
        armstrong=pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4);
        if(armstrong==m)
        {
            printf("IS ARMSTRONG");
        }
        else
        {
            printf("NOT ARMSTRONG");
        }
        break;
    default:
        printf("INVALID CHOICE");
    }
}
