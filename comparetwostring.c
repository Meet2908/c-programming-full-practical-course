#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char *s1,*s2;
    clrscr();
    printf("enter string 1 : ");
    scanf("%s",s1);
    printf("enter string 2 : ");
    scanf("%d",s2);

    if(strcmp(s1,s2)>0)
        printf("\nstring 1 is greter : ");
    elseif(strcmp(s1,s2)<0)
      printf("\nstring 2 is greter : ");
    else
       printf("strings are equale ");
    getch();      
}