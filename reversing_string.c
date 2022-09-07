#include<stdio.h>
void main()
{
    char s[20],s2[20];
    int i=0,j=0;
    printf("Enter the string: ");
    gets(s);
    
    printf("string1: %s\n",s);
    while(s[i]!='\0')
    {
        i++;
    }
    while(i>0)
    {
        s2[j]=s[i-1];
        j++;
        i--;
    }
    s2[j]='\0';
    printf("string2: %s",s2);
}