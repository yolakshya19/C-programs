#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    printf("enter your string: ");
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s",s);
}
