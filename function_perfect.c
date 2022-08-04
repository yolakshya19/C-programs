#include<stdio.h>
int perfect(int i)
{
    int c,sum=0;
    for(c=1;c<i;c++)
    {
        if(i%c==0)
        {
            sum+=c;
        }
    }
    return sum;
}

void main()
{
    int j,low,high;
    printf("enter the lowest limit of the range and highest limit: ");
    scanf("%d%d",&low,&high);

    printf("Perfect numbers between %d and %d are: \n",low,high);
    for(j=low;j<=high;j++)
    {
        if(perfect(j)==j)
        {
            printf("%d \n",j);
        }
    }
}