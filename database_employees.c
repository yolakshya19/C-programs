#include<stdio.h>
struct employee
{
    int id,age;
    char name[20];
    float salary;
}e[20];
void main()
{
    int i;
    printf("enter employee's id, name, salary and agr: \n");
    for(i=0;i<20;i++)
    {
        printf("enter details of employee %d \n",i+1);
        scanf("%d%s%f%d",&e[i].id,&e[i].name,&e[i].salary,&e[i].age);
    }

    printf("employees having salary more than 20000 and age less than 30 are: \n")
    for ( i = 0; i < 5; i++)
    {
        if(e[i].salary>20000 && e[i].age<30)
        {
            printf(e[i].name);
        }
        printf("\n");
    }
    
}