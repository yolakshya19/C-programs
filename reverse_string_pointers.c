#include<stdio.h>
void main()
{
    int l=0;
    char s1[20],s2[20];
    char *p1,*p2;
    printf("Enter a String:\n");
    gets(s1);
    p1=&s1[0];
    while(*p1!='\0')
    {
        l++;
        p1++;
    }
    p1=s1+l-1;
    p2=&s2[0];
    while(p1>=s1)
    {
       *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';
    printf("String before reverse: %s\n",s1);
    printf("String after reverse: %s",s2);
}