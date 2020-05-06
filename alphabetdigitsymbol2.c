#include<stdio.h>
#include<conio.h>
main()
{
    int i,alphabet=0,digits=0,symbols=0;
    char *s;
    clrscr();
    printf("enter the string 1.. ");
    scanf("%s",s);

    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A')&&(s[i]<='Z')||(s[i]>='a')&&(s[i]<='z'))
             alphabet++;
        else if((s[i]>='0')&&(s[i]<='9'))
             digits++;
        else
          symbols++;
                  

    }

    printf("\nalphabet : %d",alphabet);
    printf("\ndigits : %d",digits);
    printf("\nsymbols : %d",symbols);

    getch();
}