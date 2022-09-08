#include<stdio.h>
#include<stdlib.h>
struct student
{
    int r;
    char name[20];
    float marks;
}s;

void main()
{
    printf("enter the roll no.: ");
    scanf("%d",&s.r);
    printf("enter the marks: ");
    scanf("%f",&s.marks);
    printf("enter the name: ");
    fflush(stdin);
    gets(s.name);

    printf("\n----------Student details-------------\n");
    printf("roll no.: %d\t name:%s\t marks:%.3f",s.r,s.name,s.marks);
}