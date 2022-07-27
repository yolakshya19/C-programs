#include<stdio.h>
void main()
{
    int T,N,A[100000];
    int a,i,j,sum=0,max;
    printf("T: ");
    scanf("%d",&T);
    for(a=0;a<T;a++)
    {
        printf("size of array N: ");
        scanf("%d",&N);
        printf("enter the array elements: ");
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[j]);
        }
        max=A[0]+A[N-1];
        for(i=0;i<N-1;i++)
        {
            if(A[i]+A[i+1] > max)
            {
                max=A[i]+A[i+1];
            }
        }
        printf("MAX SUM: %d\n",max);
    }
}
