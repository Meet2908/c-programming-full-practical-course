#include<stdio.h>
#include<conio.h>
main()
{
    int i=1,n;
    clrscr();
    printf("enter value: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    getch();
}