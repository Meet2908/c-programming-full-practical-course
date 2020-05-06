#include<stdio.h>
#include<conio.h>
main()
{
    int i,vowels=0;
    char *s;
    clrscr();
    printf("enter the string : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
       {
           if((s[i]='A')||(s[i]='E')||(s[i]='I')||(s[i]='O')||(s[i]='U')||(s[i]='a')||(s[i]='e')||(s[i]='i')
           (s[i]='o')(s[i]='u'))
            vowels++;
       }

       printf("\nvowels :%d",vowels);
       getch();
}