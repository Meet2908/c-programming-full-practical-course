#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    char *s1;
    clrscr();
    printf("enter string 1");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z');
         s1[i]=s1[i]+32;

    }

    printf("resultent string %s",s1);
    getch();
}