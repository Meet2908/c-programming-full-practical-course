#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int i,n;
    clrscr();
    printf("enter number..");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            getch();
            exit(0);
        }
    }
    printf("Prime");
    getch();
}