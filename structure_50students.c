#include<stdio.h>
struct students
{
    int r;
    char name[20];
    float m1,m2,m3;
}s[50];
void main()
{
    int i;
    float m[50];
    printf("enter roll no., name and marks of 3 subjects\n ");
    for(i=0;i<2;i++)
    {
        printf("enter the details of %d student: ",i+1);
        scanf("%d%s%f%f%f",&s[i].r,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
        m[i]=s[i].m1+s[i].m2+s[i].m3;
    }
    printf("STUDENTS DATABSE-----------------: \n");
    printf("Rno.\tName\tMarks1\tMarks2\tMarks3\tTotal\n");
    for(i=0;i<2;i++)
    {
        printf("%d\t%s\t%3.f\t%3.f\t%3.f\t%3.f",s[i].r,s[i].name,s[i].m1,s[i].m2,s[i].m3,m[i]);
        printf("\n");
    }
}
