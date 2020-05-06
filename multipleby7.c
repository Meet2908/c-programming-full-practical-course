#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("enter value ");
    scanf("%d",&n);
    if(n%7==0)
    {
        printf("number is multiply by 7");
    }
    else
    {
        printf("number not multiply by 7");
    }
    getch();
}