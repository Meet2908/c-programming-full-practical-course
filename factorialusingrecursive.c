#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int fact(int n)
{
    int f;
    if(n==1)
      return 1;
    else
        f=n*fact(n-1);
        return f;

      
}








main()
{
    int n;
    clrscr();
    printf("enter number : ");
    scanf(%d,&n);
    printf("the factorial is %d ",fact(n));
    getch();
}