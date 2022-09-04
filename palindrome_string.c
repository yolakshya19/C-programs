#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20],s2[20];
    int i=0,j=0,k,c;
    printf("Enter a string: ");
    gets(s1);

    while(s1[i]!='\0')
    {
        i++;
    }
    for(k=i-1;k>=0;k--)
    {
        s2[j]=s1[i-1];
        j++;
        i--;
    }
    s2[j]='\0';
    i=0;
    j=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[j])
        {
            c=1;
            break;
        }
        i++;
        j++;
    }
    if(c==1)
    printf("Not palindrome");
    else
    printf("Is palindrome");

    printf("\n%s\n",s1);
    printf("%s",s2);
}