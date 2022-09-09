#include<stdio.h>
struct student
{
    int r;
    char name[20];
    float m1,m2,m3;
}s[10];

void main()
{
    int i;
    float percentage[10];
    float max;
    float temp;
    for(i=0;i<3;i++)
    {
        printf("enter roll no., name and marks of 3 subjects for student %d: \n",i+1);
        scanf("%d%s%f%f%f",&s[i].r,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
        percentage[i]=(s[i].m1+s[i].m2+s[i].m3)/3;
    }
    max=percentage[0];
    for(i=0;i<3;i++)
    {
        if(max<percentage[i])
        {
            temp=max;
            max=percentage[i];
            percentage[i]=temp;
        }
    }
    for(i=0;i<3;i++)
    {
        if(max==percentage[i])
        {
            printf("student with highest percentage: \n");
            printf("Roll no.=%d \nName=%s \nMarks= %.2f, %.2f, %.2f \nPercentage=%.2f",s[i].r,s[i].name,s[i].m1,s[i].m2,s[i].m3,percentage[i]);
        }
    }
}