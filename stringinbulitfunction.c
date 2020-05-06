#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char *s1,*s2;
    clrscr();
    printf("enter string : ");
    scanf("%s",s1);
    printf("reverse string :%s ",strrev(s1));
    printf("string length : %s",strlen(s1));
    printf("string in upper case :%s ",strupr(s1));
    printf("string in lower case : %s",strlwr(s1));
    strcpy(s2,s1);
    printf("copied string %s",s2);
    getch();
}