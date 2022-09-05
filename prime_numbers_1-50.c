#include<stdio.h>
void main()
{
    int i,n,c;
    printf("prime numbers between 1-50 are:\n");
    for(n=1;n<=50;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }

        if(c==2)
        {
            printf("%d\n",n);
        }

    }
}
