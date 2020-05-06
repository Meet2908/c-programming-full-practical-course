#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,len=0;
    char *s1,*s2;
    clrscr();
    printf("enter the string : ");
    scanf("%s",s1);
    for(i=0;s[i]!='\0';i++)
      len++;

    j=0;
    for(i=len-1;i>=0;i--)
    {
        s2[i]=s1[i];
        j++;
    }  
    s2[j]="\0";
    printf("\nreverse stirng : %s",s2);
    getch();
}