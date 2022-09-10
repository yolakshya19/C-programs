#include<stdio.h>
#define CHARACTER(ch) \
if(ch>='A' && ch<='Z') \
printf("%c is uppercase",ch); \
else if(ch>='a' && ch<='z') \
printf("%c is lowercase",ch); \
else \
printf("Invalid"); 

void main()
{
    char ch;
    printf("Enter an aplhabet: ");
    scanf("%c",&ch);
    CHARACTER(ch);
}