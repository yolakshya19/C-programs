#include<stdio.h>
void main()
{
    int i,num,c,j;
    printf("PRIME NUMBERS BETWEEN 1-300 are: \n");
    for(i=2;i<300;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
        {
            printf("%d\n",i);
        }
    }
}
