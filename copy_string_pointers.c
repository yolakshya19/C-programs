#include <stdio.h>
void main()
{

    char s1[20],s2[20], *p1, *p2;
    printf("enter 1st string: ");
    gets(s1);
    printf("enter 2nd string: ");
    gets(s2);
    p1 = s1;
    p2 = s2;

    printf("ORIGINAL STRINGS: \n%s\n%s\n",s1,s2);
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("AFTER COPYING: \n%s\n%s",s1,s2);
}
