#include<stdio.h>
#include<string.h>
void main()
{
    char name[20][20],temp[20];
    int p,s,i,n;
    printf("ENTER THE NO. OF NAMES: ");
    scanf("%d",&n);
    printf("ENTER THE NAMES: \n");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    for(p=0;p<n;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(strcmp(name[s],name[s+1])>0)
            {
                strcpy(temp,name[s]);
                strcpy(name[s],name[s+1]);
                strcpy(name[s+1],temp);
            }
        }
    }
    printf("IN DICTIONARY ORDER: \n");
    for(i=0;i<n;i++)
    {
        printf("%s \n",name[i]);
    }
}
