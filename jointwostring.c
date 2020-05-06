#include<stdio.h>
#include<conio.h>
main()
{
    int i,len=0,j;
    char *s1,*s2;
    clrscr();
    printf("enter the string 1 ");
    scanf("%s",s1);
    printf("enter the string 2 ");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0';i++)
     len++;

    j=0;

    for(i=len;s2[j]=!'\0';i++)
      s1[i]=s2[j];
      j++;

s1[i]='0';

printf("\n resultant string is %s ",s1);

getch();

}