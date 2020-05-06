#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,len=0;
    char *s1,*s2;
    clrscr();
    printf("enter the string : ");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++)
        len++;
    for(i=len-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }

    s2[j]='\0'
    for(i=0;s1[i]!='\0';i++)
      if(s1[i]==s2[i])
      {
          printf("\nnot a palidroam");
          getch();
          exit(0);
      }
      printf("it is palidrom ");    
}