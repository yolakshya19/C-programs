#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i;
    p=(int*)malloc(20*sizeof(int));
    printf("enter elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        if(*(p+i)>*p)
        {
            *p=*(p+i);
        }
    }
    printf("Largest element: %d",*p);
}