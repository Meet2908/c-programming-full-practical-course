#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("enter a value : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    getch();
    
}