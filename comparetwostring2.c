#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int i;
    char *s1,*s2;
    clrscr();
    printf("enter the string 1");
    scanf("%s",s1);
    printf("enter the string 2");
    scanf("%s",s2);
    for(i=0;s[i]!='\n0';i++)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]>=s2[i])
                 printf("\nstring 1 is greter ...");
            else
                 printf("\nstring 2 is greter  ..");
            getch();
            exit();     
                 
        }
        printf("string are equale ");
        getch();
    }
}