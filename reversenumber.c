#include<stdio.h>
#include<conio.h>
main()
{
    int rem,n;
    printf("enter number :");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        printf("%d\t",rem);
        n=n/10;
    }
    getch();

}