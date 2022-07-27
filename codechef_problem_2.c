#include<stdio.h>
void main()
{
    int T,N,A[1000];
    printf("enter the number of test cases: ");
    scanf("%d",&T);
    for(int a=0;a<T;a++)
    {
        printf("enter the length of array: ");
        scanf("%d",&N);
        printf("enter the elements of array, only 1 or -1: \n");
        for(int b=0;b<N;b++)
        {
            scanf("%d",&A[b]);
        }
    }
}
