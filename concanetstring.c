#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char *s1,*s2;
    clrscr();
    printf("enter string one : ");
    scanf("%s",s1);
    printf("enter string 2");
    scanf("%s",s2);
    printf("\nconcatinate two string %s",strcat(s1,s2));
    getch();
}