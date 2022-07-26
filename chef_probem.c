#include<stdio.h>
void main()
{
    int i,j,c,cases,prob,rating[10];
    printf("enter the number of test cases max-10: ");
    scanf("%d",&cases);

    for(i=1;i<=cases;i++)
    {
        printf("enter the total number of problems: ");
        scanf("%d",&prob);
        printf("enter the difficulty rating for each test case with space in between: ");
        for(j=1;j<=prob;j++)
        {
            scanf("%d ",&rating[j]);
            if(rating>=1000)
            {
                c++;
            }
        }
    }
}
