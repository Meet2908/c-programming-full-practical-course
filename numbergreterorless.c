#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("enter numbers: ");
    scanf("%d",&n);
    if(n>10)
    {
        printf("number is greater than 10 ");
    }
    else if(n<10)
    {
        printf("number is less than 10 ");
    }
    else
    {
       printf("number is equal to 10 ");
       
    }
    getch();

}