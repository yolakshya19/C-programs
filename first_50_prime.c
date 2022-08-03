#include<stdio.h>
void main()
{
    int count=0,i,n=2,flag;
    while(count<50)
    {
        flag=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\t",n);
            count++;
        }
        n++;
    }
}
