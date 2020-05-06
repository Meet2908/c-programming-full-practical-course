#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("enter value :");
    scanf("%d",&n);
    if(n>0)
    {
        printf("number is positive");
    }
    else if(n<0)
    {
        printf("number is nagative ");
    } 
    else
    {
        printf("number is zero");
    }
    getch();

}