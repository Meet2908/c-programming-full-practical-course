#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    char *s1,*s2;
    clrscr();
    printf("enter string : ");
    scanf("%s",s1);
    for(i=o;s[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("the copied string is %s",s2);
    getch();
}