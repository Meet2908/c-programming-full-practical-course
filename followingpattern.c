#include<stdio.h>
#include<conio.h>
main()
{
    int i,j;
    clrscr();
    for(i=1;i<80;i++)
       printf("*");
    for(i=2;i<=23;i++)
    {
          printf("*");
          for(j=2;j<=79;j++)
             printf(" ")
         printf("*");   

    }   
    for(i=1;i<=80;i++)
        printf("*")

    getch();

}