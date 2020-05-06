#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    clrscr();
    printf("enter value of a & b ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("largest value of %d",a);
    }
    else
    {
        printf("largest value of %d", b);
    }
    getch();
}