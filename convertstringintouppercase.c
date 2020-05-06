#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    char *s1;
    clrscr();
    printf("enter the string : ");
    scanf("%s",s1);
    for(i=0;s1[i]!=0;i++)

    {

        if (s1[i]>='a')&&(s1[i]<='z')
          s1[i]=s1[i]-32;
    }

    printf("resultent string is %s",s1);
    getch();
}