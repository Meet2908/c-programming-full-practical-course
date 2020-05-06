#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
    char *s;
    int i,alphabet=0,digits=0,symbol=0;
    clrscr();
    printf("enter string : ");
    scanf("%s",s);
    for(i=0,s[i]="\0",i++)
        if(isalpha(s[i]))
          alphabet++;
        else if(isdigits(s[i]))
           digits++;
        else
            symbol++;
             


printf("\nAlphabet : %d",alphabet);
printf("\ndigits : %d",digits);
printf("\nsymbols : %d",symbol);
getch();

}
