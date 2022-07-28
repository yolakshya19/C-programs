#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    int i,l,l2;
    printf("ENTER A STRING: ");
    gets(str1);
    printf("ENTER A STRING: ");
    gets(str2);
    l=0;
    while(str1[l]!='\0')
    {
        l++;
    }
    str1[l]=' ';
    l2=0;
    while(str2[l2]!='\0')
    {
        l2++;
    }
    for(i=0;i<l2;i++)
    {
        str1[l+i+1]=str2[i];
    }
    str1[l+l2+1]='\0';
    printf("CONCATENATED STRING: %s",str1);
}
