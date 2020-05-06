#include<stdio.h>
#include<conio.h>
main()
{
    int i,fact=1,n;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("Factorial of a given number is %d ",fact);
    getch();
}