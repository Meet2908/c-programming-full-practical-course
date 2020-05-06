#include<stdio.h>
#include<conio.h>
main()
{
    int i,len=0;
    char *s;
    clrscr();
    printf("enter the string : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
       len++;
    printf("the length of the string is %d ",len);
    getch();   
}